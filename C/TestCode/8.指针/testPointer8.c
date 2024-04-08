#include <stdio.h>

// 指针数组，指针类型的数组，本质是数组
int main()
{
    char *p1[5] = 
    {
        "C",
        "Java",
        "Python",
        "HTML",
        "JavaScrpt"
    };
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%s\n",p1[i]);
    }

    
    return 0;
}
