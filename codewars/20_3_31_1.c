#include<stdio.h>

int centuryFromYear(int year);

int main(void)
{
    int year;
    printf("please enter an number:");
    scanf("%d", &year);
    printf("your input is :%d\n", year);
    printf("the century is %d\n", centuryFromYear(year));

    return 0;
}

int centuryFromYear(int year)
{
    if(year%100)
    {
        return year / 100 + 1;
    }
    else
    {
        return year / 100;
    }
    
}

