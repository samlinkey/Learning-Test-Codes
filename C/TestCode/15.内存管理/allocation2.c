#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
重新调整内存的大小和释放内存
*/

int main()
{
    char name[100];
    char *description;

    strcpy(name, "Zara Ali");

    //使用malloc()函数动态分配内存
    description = (char *)malloc(30 * sizeof(char));
    if(description == NULL)
    {
        fprintf(stderr, "Error - unble to allocat requierd memory \n");
    }
    else
    {
        strcpy(description,"Zara ali a DPS student.");
    }
    //用realloc()函数给description重新分配更多的空间
    description == (char *)realloc(description, 100 * sizeof(char));
    if(description = NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory \n");
    }
    else
    {
        strcat(description, "She is class 10th");
    }

    printf("Name = %s \n", name);
    printf("description: %s \n", description);

    //使用free()函数释放内存
    free(description);

    return 0;
}