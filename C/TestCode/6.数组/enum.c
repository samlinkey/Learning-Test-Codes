#include <stdio.h>

    //定义枚举类型
    enum DAY
    {
        MON = 1, TUE, WED, THU, FRI, SAT, SUN
    };
    //定义枚举变量
    enum DAY day;

    //省略枚举名称并且直接定义枚举变量
    enum
    {
        MON = 1, TUE, WED, THU, FRI, SAT, SUN 
    }day;
