#include<stdio.h>

int main(void)
{
    int count, sum, days;

    count = 1;
    sum = 0;
    
    printf("enter days:");
    scanf("%d", &days);

    while (count++ < days)
    {
        sum = sum + count;
    }
    printf("sum = %d\n", sum);
    
    return 0;
}