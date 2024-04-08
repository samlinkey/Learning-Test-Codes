#include <stdio.h>

/*
使用递归函数生成一个给定数的费波纳数列
*/

int fibonaci(int i)
{
    if(i == 0)
    {
        return 0;
    }
    if(i == 1)
    {
        return 1;
    }
    return fibonaci(i - 1) + fibonaci(i -2);
}

int main()
{
    int i;

    printf("请输入一个整数用来计算他的斐波那契数列\n");
    printf("输入一个整数：");
    scanf("%d", &i);

    printf("%d 的斐波那契数列为:", i);
    for(; i < 10; i++)
    {
        printf("%d \t",i);
    }

    return 0;
}