#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QWidget>
#include <QDebug>
#include "serialservice.h"
#include "temperature.h"
#include "humidity.h"
#include "light.h"

namespace Ui {
class frmMain;
}

class frmMain : public QWidget
{
    Q_OBJECT

public:
    explicit frmMain(QWidget *parent = 0);
    ~frmMain();

private:
    Ui::frmMain *ui;
    SerialService *serial_server;

    QVBoxLayout *layout_temp;
    Temperature *temp;

    QVBoxLayout *layout_humi;
    Humidity *humi;

    QVBoxLayout *layout_light;
    Light *light;
    QTimer *update_timer;

    int tt;
    int hh;
    float ll;

private slots:
    void update_temp();
    void update_humi();
    void update_light();
    void processMsgFromSerial(QByteArray);
    void update_data();
};

#endif // FRMMAIN_H
