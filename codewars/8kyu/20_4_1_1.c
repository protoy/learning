#include<stdio.h>

int past(int h, int m, int s);

int main(void)
{
    int h, m, s, ms;
    printf("enter hous, minutes and seconds:");
    scanf("%d %d %d", &h, &m, &s);
    printf("milliseconds is %d\n", past(h, m, s));

    return 0;
}

int past(int h, int m, int s)
{
    return h * 3600 * 1000 + m * 60 * 1000 + s * 1000;
}