#include <stdio.h>
#include <stdlib.h>

//以下实例将整数转换为枚举
int main()
{
    enum day
    {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday
    } workday;

    int a = 6;
    enum day weekend;
    weekend = (enum day) a;//类型转换
    printf("weekend:%d",weekend);

    return 0;
}