#include <stdio.h>
int main()
{
    enum color {RED = 1, GREEN, BLUE};
    enum color favorite_color;

    /*用户输入数字来选择颜色*/
    printf("请输入你最喜欢的颜色（1. red, 2. green, 3. blue):");
    scanf("%u", &favorite_color);

    /*输出结果*/
    switch (favorite_color)
    {
        case RED:
        printf("你喜欢的颜色是红色");
        break;
        case GREEN:
        printf("你喜欢的颜色是绿色");
        break;
        case BLUE:
        printf("你喜欢的颜色是蓝色");
        break;
    }

    return 0;
}