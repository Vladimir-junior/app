#ifndef SQR_SUM_H
#define SQR_SUM_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Sqr_sum; }
QT_END_NAMESPACE

class Sqr_sum : public QMainWindow
{
    Q_OBJECT

public:
    Sqr_sum(QWidget *parent = nullptr);
    ~Sqr_sum();
    double a,b,c;

private slots:
    void on_pushButton_clicked();

private:
    Ui::Sqr_sum *ui;
    double sqr_ab(double a, double b);

};
#endif / SQR_SUM_H
