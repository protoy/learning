#include<stdio.h>

int main(void){
    char name[10];
    float height;

    printf("please enter your height:");
    scanf("%f", &height);
    printf("please enter your name");
    scanf("%s", &name);
    printf("%s, you are %3f feet tall", name, height);

    return 0;
}