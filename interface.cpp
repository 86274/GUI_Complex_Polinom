#include "interface.h"
#include "ui_interface.h"
#include "polinom.h"
#include "complex.h"

QString& operator<<(QString& s, double& x)
{
    s+=QString().setNum(x);
    return s;
}
TInterface::TInterface(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TInterface)
{
    ui->setupUi(this);
}

TInterface::~TInterface()
{
    delete ui;
}


void TInterface::on_rbtn_pressed()
{
if (ui->c->isChecked())
{
    TComplex a(ui->ar->text().toDouble(),ui->ai->text().toDouble());
    TComplex b(ui->br->text().toDouble(),ui->bi->text().toDouble());
    TComplex c(ui->cr->text().toDouble(),ui->ci->text().toDouble());
    TPolinom<TComplex> p(a, b, c);
    TComplex x[2];
    QString s;
    switch (p.rootsComplex(x))
    {
        case 0:
            ui->r1->setText("No roots");
            ui->r2->setText("No roots");
        break;
        case 1:
            s<<x[0];
            ui->r1->setText(s);
            ui->r2->setText(s);
        break;
        case 2:
            s<<x[0];
            ui->r1->setText(s);
            s="";
            s<<x[1];
            ui->r2->setText(s);
            break;
    }
}
else
{
    double a=ui->ar->text().toDouble();
    double b=ui->br->text().toDouble();
    double c=ui->cr->text().toDouble();
    TPolinom<double> p(a, b, c);
    double x[2];
    QString s;
    switch (p.rootsDouble(x))
    {
        case 0:
            ui->r1->setText("No roots");
            ui->r2->setText("No roots");
        break;
        case 1:
            s<<x[0];
            ui->r1->setText(s);
            ui->r2->setText(s);
        break;
        case 2:
            s<<x[0];
            ui->r1->setText(s);
            s="";
            s<<x[1];
            ui->r2->setText(s);
            break;
    }
}
}


void TInterface::on_vbtn_pressed()
{
    if (ui->c->isChecked()){
        TComplex a(ui->ar->text().toDouble(),ui->ai->text().toDouble());
        TComplex b(ui->br->text().toDouble(),ui->bi->text().toDouble());
        TComplex c(ui->cr->text().toDouble(),ui->ci->text().toDouble());
        TComplex x(ui->xr->text().toDouble(),ui->xi->text().toDouble());
        TPolinom<TComplex> p(a, b, c);
        TComplex v = p.value(x);
        QString s;
        s<<v;
        ui->v->setText(s);
    }
    else
    {
        double a=ui->ar->text().toDouble();
        double b=ui->br->text().toDouble();
        double c=ui->cr->text().toDouble();
        double x=ui->xr->text().toDouble();
        TPolinom<double> p(a, b, c);
        double v = p.value(x);
        QString s;
        s<<v;
        ui->v->setText(s);
    }
}


void TInterface::on_pbtn_pressed()
{
if (ui->c->isChecked())
{
    TComplex a(ui->ar->text().toDouble(),ui->ai->text().toDouble());
    TComplex b(ui->br->text().toDouble(),ui->bi->text().toDouble());
    TComplex c(ui->cr->text().toDouble(),ui->ci->text().toDouble());
    TPolinom<TComplex> p(a, b, c);
    QString s;
    s<<p;
    ui->polinom->setText(s);
}
else
{
    double a=ui->ar->text().toDouble();
    double b=ui->br->text().toDouble();
    double c=ui->cr->text().toDouble();
    TPolinom<double> p(a, b, c);
    QString s;
    s<<p;
    ui->polinom->setText(s);
}
}

