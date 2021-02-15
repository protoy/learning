#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[40];
    printf("please enter an word:");
    scanf("%s", str);
    int length = strlen(str);
    int i;
    printf("\nthe length of the word is %d\n",length);

    for (i = length; i >= 0; i--)
    {
        printf("%c",str[i]);
    }

    return 0;
}