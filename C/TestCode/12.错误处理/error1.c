#include <stdio.h>
#include <string.h>
#include <errno.h>

/*
打开不存在的文件，使用stderr文件输出流输出错误
*/

int main()
{
    FILE * pf;
    int errnum;
    pf = fopen("unexist.txt","rb");

    if (pf == NULL)
    {
        errnum = errno;
        fprintf(stderr,"错误号： %d \n", errno);
        perror("通过 perro 输出错误");
        fprintf(stderr,"打开文件错误(by strerror): %s \n", strerror( errnum ));
    }
    else
    {
        fclose(pf);
    }

    return 0;
}
