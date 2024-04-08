#include <stdio.h>


    enum DAY
    {
    MON=1, TUE, WED, THU, FRI, SAT, SUn
    };

    int main()
    {
    enum DAY day;
    day = WED;
    printf("%d",day);

    return 0;
    }