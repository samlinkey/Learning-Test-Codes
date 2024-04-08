#include <stdio.h>
#include <math.h>

/*
解一元二次方程 公式为：x = [-b±(b^2 - 4ac)^(1/2)]/2a
*/

int main()
{
    float a, b, c, x1, x2, d;
    printf("请输入方程的三个系数：");
    scanf("%f %f %f", &a, &b, &c);

    if(a != 0)
    {
        //d为判断式 sqrt方法计算平方根
        d = sqrt(b*b-4*a*c);
        x1 = (-b+d)/(2*a);
        x2 = (-b-d)/(2*a);
        if(x1 > x2)
            printf("%0.2f %0.2f \n", x1, x2);
        else
            printf("%0.2f %0.2f \n", x2, x1);
    }

    return 0;
}