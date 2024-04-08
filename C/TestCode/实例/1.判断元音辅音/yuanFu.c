#include <stdio.h>

/*
判断是否为元音
*/

int main()
{
    char c;
    int lowercaseVowel, uppercaseVowel;

    printf("请输入一个字母:");
    scanf("%c", &c);

    lowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if(lowercaseVowel || uppercaseVowel)
        printf("%c 是元音", c);
    else
        printf("%c 是辅音", c);

    return 0;
}