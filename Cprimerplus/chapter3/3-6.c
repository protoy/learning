#include<stdio.h>
int main(void){
    float quarts;
    float number;

    printf("please enter the quart of quarts:");
    scanf("%f",&quarts);
    number = quarts * 950 / (3.0e-23);

    printf("the number of molecules is :%e", number);

    return 0;
}