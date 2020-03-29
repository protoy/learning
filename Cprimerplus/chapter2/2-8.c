#include<stdio.h>

void one_three(void);
void one(void);
void two(void);
void three(void);

int main(){
    one_three();
    return 0;
}

void one_three(void){
    printf("starting now:\n");
    one();two();three();
    printf("done!\n");
}
void one(void){
    printf("one\n");
}
void two(void){
    printf("two\n");
}
void three(void){
    printf("three\n");
}