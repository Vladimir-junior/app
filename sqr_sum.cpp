#include "sqr_sum.h"
#include "ui_sqr_sum.h"
#include "c_sqr_sum.h"

Sqr_sum::Sqr_sum(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Sqr_sum)
{
    ui->setupUi(this);
    a = 0.0;
    b = 0.0;
    c = 0.0;
}

Sqr_sum::~Sqr_sum()
{
    delete ui;
}


double Sqr_sum::sqr_ab(double a, double b){
    double result_1 = (a * a) + (b * b);
    return result_1;
}


void Sqr_sum::on_pushButton_clicked()
{
    a = ui->doubleSpinBox->value();
    b = ui->doubleSpinBox_2->value();
    c = ui->doubleSpinBox_3->value();

    C_sqr_sum cSqrSum(a, b, c);
    double result_2 = cSqrSum.result_of_c();


    ui->label_7->setText(QString::number(sqr_ab(a,b)));
    ui->label_8->setText(QString::number(result_2));
}





















