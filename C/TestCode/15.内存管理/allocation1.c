#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
动态内存
*/

int main()
{
    char name[100];
    char *description;

    strcpy(name,"Zara Ali");

    //动态分配内存
    description = (char *)malloc(200 * sizeof(char));
    if(description == NULL)
    {
        fprintf(stderr, "Error - unale to allocation requierd memory \n");
    }
    else
    {
        strcpy(description, "Zara ali a DPS student in class 10th");
    }
    printf("Name = %s \n", name);
    printf("Description: %s \n", description);

    return 0;
}
