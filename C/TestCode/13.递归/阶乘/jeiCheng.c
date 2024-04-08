#include <stdio.h>

/*用for循环实现阶乘*/

long recursion(int num);

long recursion(int num)
{
    long result;

    for (result = 1; num > 1; num--)
    {
        result *= num;
    }

    return result;
}

int main(void) 
{
    int num;

    printf("请输入一个正整数 ：");
    scanf("%d", &num);

    printf("%d 的阶乘是 ：%d \n", num, recursion(num));

    return 0;
}