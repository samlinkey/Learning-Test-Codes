#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "sheep8898";
    char str2[] = "sheep8898";

    if (! strcmp(str1, str2))
    {
        printf("两个字符串完全一致");
    }
    else
    {
        printf("两个字符串存在差异");
    }
    

    return 0;
}