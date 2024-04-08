#include <stdio.h>

int main(int argc, char const *argv[])
{
    char f = 'F';
    int a = 123;

    char *pa = &f;
    int *pb = &a;

    printf("a = %d\n", *pb);
    printf("f = %c\n", *pa);

    *pa = 'c';
    *pb += 1;

    printf("now a = %d\n", *pb);
    printf("now f = %c\n", *pa);

    printf("size of pb = %d\n", sizeof(pb));
    printf("size of pa = %d\n",  sizeof(pa));

    printf("the adress of a is = %p\n", pa);
    printf("the adress of f is = %p\n", pb);


    return 0;
}
