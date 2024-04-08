#include <stdio.h>
#include <stdarg.h>

/*
声明一个可变参数的函数，返回他们的平均值
*/

double average(int num, ...)
{
    //创建一个va_list类型的变量
    va_list valist;
    double sum = 0.0;
    int i;

    //初始化剋按参数列表
    va_start(valist, num);

    //访问所有参数列表中的参数，并全部遍历添加到sum中
    for(i = 0; i < num; i++)
    {
        //va_arg获取参数列表中的下一个参数，每一次执行完成指针会指向下一个参数
        sum += va_arg(valist, int);
    }

    //清理为 valist 保留的内存
    va_end(valist);

    return sum / num;
}

int main()
{
    printf("Average of 2, 3, 4, 5 = %f \n", average(4, 2, 3, 4, 5));
    printf("Average of 5, 10, 15 = %f \n", average(3,5, 10, 15));
}