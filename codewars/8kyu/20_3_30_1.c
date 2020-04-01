#include<stdio.h>
int makeNegative(int num);
int main(void)
{
    int num;
    printf("enter a num:");
    scanf("%d", &num);
    printf("the input is %d", num);
    makeNegative(num);

    return 0;
}

int makeNegative(int num)
{
  int result = num;
  if(result > 0)
    {result = -result;}
    
  printf("the negative is %d", result);
}