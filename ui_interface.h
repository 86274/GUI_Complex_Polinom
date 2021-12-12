/********************************************************************************
** Form generated from reading UI file 'interface.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACE_H
#define UI_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TInterface
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *ar;
    QLineEdit *ai;
    QLineEdit *br;
    QLineEdit *bi;
    QLineEdit *cr;
    QLineEdit *ci;
    QLineEdit *xr;
    QLineEdit *xi;
    QLabel *r1;
    QLabel *r2;
    QLabel *v;
    QPushButton *rbtn;
    QPushButton *vbtn;
    QPushButton *pbtn;
    QLabel *polinom;
    QGroupBox *groupBox;
    QRadioButton *r;
    QRadioButton *c;

    void setupUi(QWidget *TInterface)
    {
        if (TInterface->objectName().isEmpty())
            TInterface->setObjectName(QString::fromUtf8("TInterface"));
        TInterface->resize(800, 600);
        label = new QLabel(TInterface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 150, 47, 13));
        label_2 = new QLabel(TInterface);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 180, 47, 13));
        label_3 = new QLabel(TInterface);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 210, 47, 13));
        label_4 = new QLabel(TInterface);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 240, 47, 13));
        label_5 = new QLabel(TInterface);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 270, 41, 20));
        label_6 = new QLabel(TInterface);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 300, 47, 13));
        label_7 = new QLabel(TInterface);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 330, 47, 13));
        ar = new QLineEdit(TInterface);
        ar->setObjectName(QString::fromUtf8("ar"));
        ar->setGeometry(QRect(70, 150, 61, 21));
        ai = new QLineEdit(TInterface);
        ai->setObjectName(QString::fromUtf8("ai"));
        ai->setGeometry(QRect(150, 150, 61, 21));
        br = new QLineEdit(TInterface);
        br->setObjectName(QString::fromUtf8("br"));
        br->setGeometry(QRect(70, 180, 61, 21));
        bi = new QLineEdit(TInterface);
        bi->setObjectName(QString::fromUtf8("bi"));
        bi->setGeometry(QRect(150, 180, 61, 21));
        cr = new QLineEdit(TInterface);
        cr->setObjectName(QString::fromUtf8("cr"));
        cr->setGeometry(QRect(70, 210, 61, 21));
        ci = new QLineEdit(TInterface);
        ci->setObjectName(QString::fromUtf8("ci"));
        ci->setGeometry(QRect(150, 210, 61, 21));
        xr = new QLineEdit(TInterface);
        xr->setObjectName(QString::fromUtf8("xr"));
        xr->setGeometry(QRect(70, 240, 61, 21));
        xi = new QLineEdit(TInterface);
        xi->setObjectName(QString::fromUtf8("xi"));
        xi->setGeometry(QRect(150, 240, 61, 21));
        r1 = new QLabel(TInterface);
        r1->setObjectName(QString::fromUtf8("r1"));
        r1->setGeometry(QRect(90, 270, 261, 16));
        r2 = new QLabel(TInterface);
        r2->setObjectName(QString::fromUtf8("r2"));
        r2->setGeometry(QRect(90, 300, 261, 16));
        v = new QLabel(TInterface);
        v->setObjectName(QString::fromUtf8("v"));
        v->setGeometry(QRect(90, 330, 261, 16));
        rbtn = new QPushButton(TInterface);
        rbtn->setObjectName(QString::fromUtf8("rbtn"));
        rbtn->setGeometry(QRect(300, 150, 80, 21));
        vbtn = new QPushButton(TInterface);
        vbtn->setObjectName(QString::fromUtf8("vbtn"));
        vbtn->setGeometry(QRect(300, 200, 80, 21));
        pbtn = new QPushButton(TInterface);
        pbtn->setObjectName(QString::fromUtf8("pbtn"));
        pbtn->setGeometry(QRect(300, 250, 80, 21));
        polinom = new QLabel(TInterface);
        polinom->setObjectName(QString::fromUtf8("polinom"));
        polinom->setGeometry(QRect(40, 360, 341, 16));
        groupBox = new QGroupBox(TInterface);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 40, 171, 101));
        r = new QRadioButton(groupBox);
        r->setObjectName(QString::fromUtf8("r"));
        r->setGeometry(QRect(10, 30, 121, 19));
        r->setChecked(true);
        c = new QRadioButton(groupBox);
        c->setObjectName(QString::fromUtf8("c"));
        c->setGeometry(QRect(10, 60, 121, 19));

        retranslateUi(TInterface);

        QMetaObject::connectSlotsByName(TInterface);
    } // setupUi

    void retranslateUi(QWidget *TInterface)
    {
        TInterface->setWindowTitle(QCoreApplication::translate("TInterface", "TInterface", nullptr));
        label->setText(QCoreApplication::translate("TInterface", "a=", nullptr));
        label_2->setText(QCoreApplication::translate("TInterface", "b=", nullptr));
        label_3->setText(QCoreApplication::translate("TInterface", "c=", nullptr));
        label_4->setText(QCoreApplication::translate("TInterface", "x=", nullptr));
        label_5->setText(QCoreApplication::translate("TInterface", "root1=", nullptr));
        label_6->setText(QCoreApplication::translate("TInterface", "root2=", nullptr));
        label_7->setText(QCoreApplication::translate("TInterface", "value=", nullptr));
        r1->setText(QString());
        r2->setText(QString());
        v->setText(QString());
        rbtn->setText(QCoreApplication::translate("TInterface", "\320\232\320\276\321\200\320\275\320\270", nullptr));
        vbtn->setText(QCoreApplication::translate("TInterface", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\321\217", nullptr));
        pbtn->setText(QCoreApplication::translate("TInterface", "\320\237\320\276\320\273\320\270\320\275\320\276\320\274", nullptr));
        polinom->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("TInterface", "\320\240\320\265\320\266\320\270\320\274", nullptr));
        r->setText(QCoreApplication::translate("TInterface", "\320\222\320\265\321\211\320\265\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\265", nullptr));
        c->setText(QCoreApplication::translate("TInterface", "\320\232\320\276\320\274\320\277\320\273\320\265\320\272\321\201\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TInterface: public Ui_TInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACE_H
