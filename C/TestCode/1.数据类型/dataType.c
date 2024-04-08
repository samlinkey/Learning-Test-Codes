#include <stdio.h>

int main(){


    float f = 333.666666;
    // sizeof 运算符用于获得数据类型或表达式的长度
    printf("size of int is %d\n",sizeof(int));
    printf("size of short is %d\n",sizeof(short));
    printf("size of float is %d\n",sizeof(float));
    printf("size of double is %d\n",sizeof(double));
    printf("size of _Bool is %d\n",sizeof(_Bool));

    printf("========================================\n");

    // 加上signed表示此整数是带符号的(int默认为带符号整数)，加上unsigned表示此整数是不带符号的
    signed int si = -233;
    unsigned int ui = 233;
    printf("%d\n",si);
    printf("%u\n",ui);

    printf("========================================\n");

    // 声明打印char和string
    char c = 'a';
    char name[6] = {'s','h','e','e','p','\0'};
    char name2[] = "sheep";

    printf("%c\n",c);
    printf("%s\n",name);
    printf("%s\n",name2);

    printf("========================================\n");

    // 强制数据类型转换
    int in = 1;
    float fl =1.8;
    int ad = in + (int)fl;
    printf("%d\n",ad);



    return 0;
}
