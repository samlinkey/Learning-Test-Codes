#include <stdio.h>

/*
文件的写入
*/

int main()
{
    FILE *fp = NULL;

    fp = fopen("test.txt","w+");
    fprintf(fp,"This is testing for fprintf... \n");
    fputs("This is a testing for fputs... \n",fp);
    fclose(fp);
}