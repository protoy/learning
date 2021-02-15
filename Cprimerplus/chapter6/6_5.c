#include <stdio.h>

int main(void)
{
    int i, j;
    char first;
    char inputC;
    printf("please input an character:\n");
    scanf("%c", &inputC);
    for (i = 0; i < 5; i++)
    {
        first = inputC;
        for (j = 0; j < 2*i+1; j++)
        {
            printf("%c",first);
            if(j<i)
            {
                first++;
            }else{
                first--;
            }
        }
        printf("\n");
    }

    return 0;
}