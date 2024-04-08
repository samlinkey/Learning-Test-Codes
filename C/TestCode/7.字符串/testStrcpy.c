#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "I Love Program!";
    char str2[] = "New String";
    char str3[100];
    char str4[50];

    strcpy(str1,str2);
    strcpy(str3, "Copy Successful");
    strncpy(str4,str1,6);

    printf("str1 = %s\n",str1);
    printf("str2 = %s\n",str2);
    printf("str3 = %s\n",str3);
    printf("str4 = %s\n",str4);

    return 0;
}