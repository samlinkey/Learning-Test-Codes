#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
返回指针的函数，获取并把随机数存入数组
*/

int *getRandom()
{
    static int r[10];
    int i;

    //设置随机数生成的种子
    srand((unsigned)time(NULL));
    //循环把随机数存入到数组中，并打印
    for(i = 0; i < 10; i++)
    {
        r[i] = rand();
        printf("%d \n",r[i]);
    }

    //返回数组指针
    return r;
}

int main()
{
    //指向整型的指针，用来指向数组
    int *p;
    //循环变量
    int i;

    p = getRandom();
    for(i = 0; i < 10; i++)
    {
        printf("*(p + [%d]): %d \n", i, *(p + i));
    }

    return 0;
}
