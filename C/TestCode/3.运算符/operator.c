#include <stdio.h>
int main()
{
    // 算数运算符

    
    // 关系运算符
    int a = 5, b = 3;

    printf("%d\n",1 > 2);
    printf("%d\n",a > b);
    printf("%d\n",a >= b);
    printf("%d\n",'a'+'b'>'c');
    printf("%d\n", (a=3) > (b=5));

    printf("============================\n");

    //逻辑运算符
    printf("%d\n",!1);
    printf("%d\n",1>2 && 3<4);
    printf("%d\n",1+5 || 1==0);
    printf("%d\n",!(a+b));
    printf("%d\n",0+1>b && 1==1);
    //短路求值
    (a = 0) && (b = 4);
    printf("%d %d\n",a,b);
    (a = 1) || (b = 4);
    printf("%d %d\n",a,b);
    
}