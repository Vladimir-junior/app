#ifndef C_SQR_SUM_H
#define C_SQR_SUM_H
#include "sqr_sum.h"


class C_sqr_sum : public Sqr_sum
{
public:
    C_sqr_sum(double a, double b, double c);
    double result_of_c();
private:
    double c;
};

#endif // C_SQR_SUM_H
