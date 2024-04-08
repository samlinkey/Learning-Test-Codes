#include <stdio.h>
int main(){
    int count = 0,i = 0;

    do{
        count = count + i;
        i++;    
    } while(i<100);

    printf("结果是：%d",count);

    return 0;
}