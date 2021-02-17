//.使用嵌套循环，按下面的格式打印字母：
// F
// FE
// FED
// ...
// FEDCBA
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