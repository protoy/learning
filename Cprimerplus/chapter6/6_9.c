// 8.编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数
// 乘积的结果。在用户输入非数字之前，程序应循环处理用户输入的每对值。
// 9.修改练习8，使用一个函数返回计算的结果。

#include<stdio.h>
float calc(float num1,float num2);
int main(void)
{
    float num1,num2;
    printf("please enter two float number:");
    scanf("%f %f",&num1,&num2);
    printf("%f",(num1-num2)/(num1*num2));

    return 0;
}

float calc(float num1,float num2){
    return (num1-num2)/(num1*num2);
}