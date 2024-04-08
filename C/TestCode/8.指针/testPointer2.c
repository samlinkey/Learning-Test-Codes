#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    int *p = &a;

    /*
    canf函数输入的变量需要传入地址值
    对于整数变量，可以使用&运算符获取其地址值
    对于指针变量，它本身就是一个地址值，无需使用&运算符
    */
    printf("请输入一个整数：");
    scanf("%d",&a);
    printf("a = %d\n",a);

    printf("请重新输入一个整数:");
    scanf("%d", p);
    printf("a = %d\n",a);


    return 0;
}
