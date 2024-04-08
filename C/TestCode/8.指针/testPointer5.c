#include <stdio.h>
#include <string.h>

//字符串指针
int main(int argc, char const *argv[])
{
    char *str = "Sheep8898";
    int i, length;

    length = strlen(str);
    for(i = 0; i < length; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
