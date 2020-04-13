#include<stdio.h>

int main(void){
    char array[26];
    int i;
    for(i=0; i<26; i++){
        array[i] = 'a' + i;
        printf("array[%d] is %c\n", i+1, array[i]);
    }

    return 0;
}