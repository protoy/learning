#include<stdio.h>
#define weekday 7
int main(void)
{
    int daysinput;
    int week, day;
    printf("please enter a number of days:\n");
    scanf("%d", &daysinput);
    while(daysinput > 0)
    {
        week = daysinput / weekday;
        day = daysinput % weekday;
        printf("%d days are %d weeks, %d days", daysinput, week, day);
        scanf("%d", &daysinput);
    }

    return 0;
}