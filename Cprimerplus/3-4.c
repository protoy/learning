#include<stdio.h>
int main(void){
    float input;
    printf("please enter a float-point value:");
    scanf("%f",&input);
    printf("fixed-point notation%.6f\n", input);
    printf("exponential notation%e\n", input);
    printf("p notation%a\n", input);

    return 0;
}