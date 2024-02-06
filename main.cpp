#include "sqr_sum.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sqr_sum w;
    w.show();
    w.setWindowTitle("Калькулятор");
    return a.exec();
}
