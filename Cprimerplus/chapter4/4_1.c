#include<stdio.h>

int main(void){
    char firstname[10], lastname[10];
    printf("please enter your first name and last name:");
    scanf("%s %s", &firstname, &lastname);
    printf("your name is %s %s", lastname, firstname);

    return 0;
}