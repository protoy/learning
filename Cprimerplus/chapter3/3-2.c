#include<stdio.h>
int main(void){
    int ascii;
    printf("please enter an ASCII number");
    scanf("%d", &ascii);
    printf("%d is the ASCII code for %c\n", ascii, ascii);

    return 0;
}