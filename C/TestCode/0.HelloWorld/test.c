#include <stdio.h>
int main()
{
    int v = 100;
    int *pt1;
    int **pt2;

    pt1 = &v;
    pt2 = &pt1;

    printf("var = %d \n", v);
    printf("pt1 = %p \n", pt1);
    printf("*pt1 = %d \n", *pt1);
    printf("pt2 = %p \n", pt2);
    printf("**pt2 = %d \n", **pt2);

    return 0;
}