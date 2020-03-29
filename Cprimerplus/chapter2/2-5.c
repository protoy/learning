#include<stdio.h>

void br(void);
void ic(void);

int main(void){
    br();
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();

    return 0;
}

void br(void){
    printf("brazil,russia");
}
void ic(void){
    printf("india, china");
}