#include<stdio.h>

void print(double n);

int main(void)
{
    double n, cube;
    printf("enter a number of double:");
    scanf("%lf", &n);

    cube = n * n * n;
    printf("%f\n", cube);
    print(cube);

    return n;
}

void print(double n)
{
    printf("the cube of the number is %f", n);
}