#include <stdio.h>

int main(void)
{
    int first = 'F';
    int i, j;
    for (i = 0; i < 6; i++)
    {
        first = 'F';
        for (j = 0; j <= i; j++)
        {
            printf("%c", first);
            first--;
        }
        printf("\n");
    }

    return 0;
}