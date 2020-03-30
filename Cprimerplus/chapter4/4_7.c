#include<stdio.h>
#include<float.h>

int main(void)
{
    double valueD;
    float valueF;

    valueD = 1.0/3.0;
    valueF = 1.0/3.0;

    printf("three value of double:%.6f, %.12f, %.16f\n", valueD, valueD, valueD);
    printf("three value of float:%.6f, %.12f, %.16f\n", valueF, valueF, valueF);
    printf("FLT_DIG is %d   DBL_DIG is %d\n", FLT_DIG, DBL_DIG);

    return 0;
}