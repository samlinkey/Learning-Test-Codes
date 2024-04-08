#include <stdio.h>

//数组指针，指向一个数组的指针，本质是指针
int main()
{
    int temp[] = {1, 2, 3, 4, 5};
    int (*p1)[5] = &temp;
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n",*(p1+i));
    }
    
    return 0;
}
