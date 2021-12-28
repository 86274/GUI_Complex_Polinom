#ifndef TINTERFACE_H
#define TINTERFACE_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class TInterface; }
QT_END_NAMESPACE

class TInterface : public QWidget
{
    Q_OBJECT

public:
    TInterface(QWidget *parent = nullptr); 
    ~TInterface();

private slots:
    void on_rbtn_pressed(); //Метод-обработчик нажатия кнопки вычисления корней  

    void on_vbtn_pressed(); //Метод-обработчик нажатия кнопки вычисления значения полинома

    void on_pbtn_pressed(); //Метод-обработчик нажатия кнопки вывода текстового представления полинома

private:
    Ui::TInterface *ui;
};
#endif // TINTERFACE_H
