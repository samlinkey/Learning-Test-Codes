#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "I Love";
    char str2[] = "You";

    strcat(str1,str2);

    printf("str1 = %s\n",str1);
    

    return 0;
}