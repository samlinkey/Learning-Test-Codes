#include <stdio.h>
#include <stdlib.h>

/*
检查除法运算前是否除数为0，并通过把错误信息写入stderr标准错误输出流输出错误信息
*/
int main()
{
    int dividend = 20;  //被除数
    int divisor = 0;    //除数
    int quotient;       //商

    if(divisor == 0)
    {
        fprintf(stderr,"除数为 0 退出运行... \n");
        exit(EXIT_FAILURE);
    }

    quotient = dividend / divisor;
    fprintf(stdout, "quotient 变量的值为： %d \n", quotient);
    exit(EXIT_SUCCESS);
}