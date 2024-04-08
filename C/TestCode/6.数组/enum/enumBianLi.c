#include <stdio.h>

enum Day
{
    MON= 1, TUE, WEN, THU, FRI, SAT, SUN
}day;
int main()
{
    //遍历枚举元素
    for (day =MON; day <= SUN; day++)
    {
        printf("枚举元素 ：%d \n",day);
    }
}