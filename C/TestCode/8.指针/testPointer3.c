#include <stdio.h>

// C语言数组名是数组中第一个元素的地址
int main(int argc, char const *argv[])
{
    char str[128];

    printf("请输入谷歌网址：");
    scanf("%s", str);

    // printf("谷歌的域名是：%s\n", str);

    printf("str的地址是：%p\n", str);
    printf("str的地址是：%p\n", &str[0]);

    return 0;
}

