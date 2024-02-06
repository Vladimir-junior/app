#include "c_sqr_sum.h"

C_sqr_sum::C_sqr_sum(double a, double b, double c) : Sqr_sum(nullptr), c(c)
{
    this->a = a;
    this->b = b;
}

double C_sqr_sum::result_of_c() {
    double result_2 = (c-b)/a;
    return result_2;
}
