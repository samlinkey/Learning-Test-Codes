#include <stdio.h>

//通过指针计算数组共有多少个字符
int main()
{
    char str[] = "I Love You";
    int count;
    char *target = str;

    while (*target++ != '\0')
    {
        count++;
    }

    printf("总共有%d个字符\n",count);

    return 0;
}
