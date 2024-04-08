#include <stdio.h>
int main()
    {
        // 学习printf函数
        int a =1;
        float c =3.14;
        double d =3.141592653;


        printf("耶稣诞生于公元%d年\n",a);
        printf("圆周率小数点后两位%f\n",c);
        printf("圆周率小数点后十位%.10f\n",d);

        
        // printf允许限定占位符的最小宽度 如不满会在对应值前加空格 为右对齐
        //可在占位符%后加-改为左对齐 即在内容后出现空格
        printf("%5d\n",123);
        printf("%-12f\n",123.45);
        
        // printf()默认不对正数显示+号，可在占位符%添加+显示
        printf("%+d\n",12);
        printf("%+d\n",-12);
        
        // 如此书写来限定小数位数

        printf("%.2f\n",3.143);


        return 0;
    }