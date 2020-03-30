#include<stdio.h>

int Liters(double time);

int main(void)
{
    double time;
    printf("enter a number:");
    scanf("%lf", &time);
    printf("time is %lf\n", time);
    printf("the water is %d", Liters(time));

    return 0;
}

int Liters(double time)
{
    return time / 2;
}