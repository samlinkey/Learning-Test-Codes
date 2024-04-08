#include <stdio.h>

// 指针的运算
int main(int argc, char const *argv[])
{
    char a[] = "Sheep";
    char *p = a;

    printf("*p = %c , *(p+1) = %c , *(p+2) = %c", *p, *(p+1), *(p+2));

    return 0;
}
