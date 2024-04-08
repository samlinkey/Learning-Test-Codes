#include <stdio.h>

/*
文件的读取
*/

int main()
{
    FILE *fp;
    int str[255];

    fp = fopen("test.txt", "r");
    fscanf(fp,"%s",str);
    printf("1: %s \n",str);

    fgets(str, 255, (FILE*)fp);
    printf("2: %s",str);

    fgets(str, 255, (FILE*)fp);
    printf("3: %s",str);

    fclose(fp);
}