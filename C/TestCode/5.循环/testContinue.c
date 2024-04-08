#include <stdio.h>
int main(){
    int ch;

    printf("请输入字符串：");

    while ((ch = getchar()) != '\n')
    {
        if (ch == 'c') 
        {
            continue;
        }
        
        putchar(ch);
    }

    putchar(ch);

    return 0;
}