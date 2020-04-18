#include<stdio.h>
int main(void){
    int num;
    int a = 1, b = 1;
    int res = 0;
    int i = 3;

    printf("enter a number:");
    scanf("%d", &num);
    if(num == 1 || num ==2){
        printf("result is 1\n");
    }else{
        for(i = 3; i <= num; i++){
            res = a + b;
            printf("res is %d\n",res);
            a = b;
            printf("a is %d\n",a);
            b = res;
            printf("b is %d\n",b);
        }
        printf("the result is %d\n", res);
    }

    return 0;
}