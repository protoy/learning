#include<stdio.h>
#define time 60

int main(void)
{
    int minute, hour, plusminute;

    printf("please enter a time in minute:");
    scanf("%d",&minute);
    while(minute > 0)
    {
        hour = minute / time;
        plusminute = minute % time;
        printf("the time is %d hours and %d minutes\n", hour, plusminute);
        printf("enter next minutes value (0 to quit):");
        scanf("%d", &minute);
    }
    printf("bye!");

    return 0;
}