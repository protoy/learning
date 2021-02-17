// 编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单
// 词。提示：strlen()函数（第4章介绍过）可用于计算数组最后一个字符的下
// 标。


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