#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "I Love FishC!";

    // sizeof函数获取字符数组长度
    printf("sizeof str = %d\n", sizeof(str));

    // strlen获取字符串的长度，不包含\0
    printf("strlen str = %u\n", strlen(str));
    

    return 0;
}