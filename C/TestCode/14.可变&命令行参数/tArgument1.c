#include <stdio.h>

/*
命令行参数
*/

//argc是参数数量，argc是指针数组，指向程序名称和输入的参数
int main( int argc, char *argv[] )
{
    printf("Program name is : %s \n", argv[0]);
    
    //第一个参数为程序名
    if( argc == 2 )
    {
        printf("The argument supplied is %s \n", argv[1]);
    }
    else if(argc > 2)
    {
        printf("Too many arguments supplied. \n");
    }
    else
    {
        printf("One argument expected. \n");
    }

    return 0;

}

