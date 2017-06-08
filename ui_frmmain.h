/********************************************************************************
** Form generated from reading ui file 'frmmain.ui'
**
** Created: Thu May 18 11:02:58 2017
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_FRMMAIN_H
#define UI_FRMMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMain
{
public:
    QFrame *fm_1;
    QFrame *fm_3;
    QFrame *fm_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *frmMain)
    {
        if (frmMain->objectName().isEmpty())
            frmMain->setObjectName(QString::fromUtf8("frmMain"));
        frmMain->resize(729, 423);
        frmMain->setStyleSheet(QString::fromUtf8(""));
        fm_1 = new QFrame(frmMain);
        fm_1->setObjectName(QString::fromUtf8("fm_1"));
        fm_1->setGeometry(QRect(0, 180, 241, 241));
        fm_1->setCursor(QCursor(Qt::ArrowCursor));
        fm_1->setFrameShape(QFrame::StyledPanel);
        fm_1->setFrameShadow(QFrame::Raised);
        fm_1->setLineWidth(0);
        fm_3 = new QFrame(frmMain);
        fm_3->setObjectName(QString::fromUtf8("fm_3"));
        fm_3->setGeometry(QRect(480, 180, 241, 241));
        fm_3->setFrameShape(QFrame::StyledPanel);
        fm_3->setFrameShadow(QFrame::Raised);
        fm_2 = new QFrame(frmMain);
        fm_2->setObjectName(QString::fromUtf8("fm_2"));
        fm_2->setGeometry(QRect(240, 180, 241, 241));
        fm_2->setFrameShape(QFrame::StyledPanel);
        fm_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(frmMain);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 160, 62, 17));
        label_2 = new QLabel(frmMain);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(360, 160, 62, 17));
        label_3 = new QLabel(frmMain);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(590, 160, 62, 17));

        retranslateUi(frmMain);

        QMetaObject::connectSlotsByName(frmMain);
    } // setupUi

    void retranslateUi(QWidget *frmMain)
    {
        frmMain->setWindowTitle(QApplication::translate("frmMain", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("frmMain", "\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("frmMain", "\346\271\277\345\272\246", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("frmMain", "\344\272\256\345\272\246", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(frmMain);
    } // retranslateUi

};

namespace Ui {
    class frmMain: public Ui_frmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMAIN_H
