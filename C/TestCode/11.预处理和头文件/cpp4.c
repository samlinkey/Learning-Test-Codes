#include <stdio.h>

#define MAX(a,b) (a) > (b) ? (a) :(b)

/*
用带有参数的宏，比较两个数的大小
*/

int main()
{
    printf("MAx between 20 an 10 is %d \n",MAX(10,20));

    return 0;
}
