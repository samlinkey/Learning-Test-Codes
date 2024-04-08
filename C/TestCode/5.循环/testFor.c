#include <stdio.h>
int main(){
    int count = 0;
    for(int i = 0;i <100;i++){
        count= count + i;
    }

    printf("结果是：%d",count);
    
    return 0;
}