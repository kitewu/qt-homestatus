#include "frmmain.h"
#include "ui_frmmain.h"
#include <QThread>

frmMain::frmMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmMain)
{
    ui->setupUi(this);

    tt = hh = 0;
    ll = 0;

    layout_temp=new QVBoxLayout();
    temp=new Temperature(ui->fm_1);
    temp->setAnimating(true);
    layout_temp->addWidget(temp);
    ui->fm_1->setLayout(layout_temp);
    temp->setVisible(true);

    layout_humi = new QVBoxLayout();
    humi = new Humidity(ui->fm_2);
    humi->setAnimating(true);
    layout_humi->addWidget(humi);
    ui->fm_2->setLayout(layout_humi);
    humi->setVisible(true);

    layout_light = new QVBoxLayout();
    light = new Light(ui->fm_3);
    light->setAnimating(true);
    layout_light->addWidget(light);
    ui->fm_3->setLayout(layout_light);
    light->setVisible(true);

    serial_server = new SerialService();
    serial_server->openCom();

    update_timer = new QTimer();
    update_timer->start(3000);
//    connect(this->update_timer, SIGNAL(timeout()), this, SLOT(update_data()));
    connect(this->serial_server, SIGNAL(receiveMsgFromSerial(QByteArray)), this, SLOT(processMsgFromSerial(QByteArray)));


    QThread *thread = new QThread;
    connect(this->update_timer, SIGNAL(timeout()), this, SLOT(update_temp()));
    temp->moveToThread(thread);
    thread->start();

    QThread *thread2 = new QThread;
    connect(this->update_timer, SIGNAL(timeout()), this, SLOT(update_humi()));
    temp->moveToThread(thread2);
    thread2->start();

    QThread *thread3 = new QThread;
    connect(this->update_timer, SIGNAL(timeout()), this, SLOT(update_light()));
    temp->moveToThread(thread3);
    thread3->start();


    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::green);
    ui->label->setPalette(pe);
    ui->label_2->setPalette(pe);
    ui->label_3->setPalette(pe);
}

frmMain::~frmMain()
{
    delete ui;
}

void frmMain::update_temp()
{
    temp->setValue(tt);
}

void frmMain::update_humi()
{
    humi->setValue(hh);
}

void frmMain::update_light()
{
    light->setValue((int)ll);
}

void frmMain::processMsgFromSerial(QByteArray msg)
{
    if(msg.length() < 6)
        return;
    //温湿亮度
    if(msg[3] == 0x02 && msg[4] == 0x01)
    {
        tt = (msg[5] << 8) + msg[6];

        hh = (msg[7] << 8) + msg[8];

        unsigned char adc_value[2];
        adc_value[0] = msg[10];
        adc_value[1] = msg[9];
        adc_value[0] = adc_value[0] >> 2;
        float light = (adc_value[1]*256 + adc_value[0]) * 3.3 / 8192;
        light = light / 4;
        light = light * 913;
        ll = light;
    }
}

void frmMain::update_data()
{
    update_temp();
    update_humi();
    update_light();
}
