#include <stdio.h>

/*
函数指针 比较整数的最大值
*/

int max(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    //p是函数指针
    int (*p)(int, int) = & max;//&可以省略
    int a, b, c, d;

    printf("整数比较程序 \n");
    printf("请输入三个数字：");
    scanf("%d %d %d",&a, &b, &c);

    //使用函数指针与直接使用函数等价
    d = p(p(a, b), c);

    printf("最大的数字是：%d \n",d);

    return 0; 
}