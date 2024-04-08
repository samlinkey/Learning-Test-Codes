#include <stdio.h>
#include <time.h>

void getSeconds(unsigned long *par);

/*通过传递指针给函数，获取当前秒数*/
int main()
{
    unsigned long sec;

    getSeconds(&sec);

    //输出实际值
    printf("Number of seconds: %ld \n",sec);

    return 0;

}

void getSeconds(unsigned long *par)
{
    //获取当前秒数
    *par = time(NULL);
    return;

}