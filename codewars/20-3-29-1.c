//Create a function that checks if a number n is divisible by two numbers x AND y. All inputs are positive, non-zero digits.
#include<stdio.h>
int isDivisible(int n, int x, int y);

int main(void){
    int n = 48;
    int x = 3;
    int y = 4;
    printf("the result is %d", isDivisible(n,x,y));
}

int isDivisible(int n, int x, int y){
    if((n%x ==0) && (n%y == 0)){
        return 1;
    }
  else{
        return 0;
  }
}