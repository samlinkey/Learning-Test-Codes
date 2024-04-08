#include <stdio.h>
// 求素数程序增加了break语句的改进版
int main(){
    long long i,num;
    _Bool flag = 1;

    printf("请输入一个整数：");
    scanf("%lld",&num);

    for(i = 2; i < num / 2; i++){
        if(num % i == 0){
            flag = 0;
            break;
        }
    }

    if (flag){
        printf("%d是一个素数",num);
    }
    else{
        printf("%d不是一个素数",num);
    }

    return 0;
}