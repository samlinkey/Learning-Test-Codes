#include <stdio.h>
int main(){
    int count = 0;

    printf("请输入一行英文字符：");
    
    while(getchar() != '\n'){
        count = count + 1;
    }

    printf("你总共输入了%d个字符",count);

    return 0;
}