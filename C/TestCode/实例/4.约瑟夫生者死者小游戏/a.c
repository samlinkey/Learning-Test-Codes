#include <stdio.h>

#define TOTAL_PEOPLE 30
#define PEOPLE_TO_LEAVE 15

/*
约瑟夫生者死者小游戏

30 个人在一条船上，超载，需要 15 人下船。
于是人们排成一队，排队的位置即为他们的编号。
报数，从 1 开始，数到 9 的人下船。
如此循环，直到船上仅剩 15 人为止，问都有哪些编号的人下船了呢？
*/

int main()
{
    int people[PEOPLE_TO_LEAVE];//编号
    int count = 0;              //下船人数
    int index = 0;
    int number = 1;

    //初始化人员编号
    for(int i = 0; i < TOTAL_PEOPLE; i++)
    {
        people[i] = i +1;
    }

    //循环报数直到船上剩下15人
    while(count < PEOPLE_TO_LEAVE)
    {
        //当people[i]不为零，也就是数到的编号没有下船
        if(people[index] != 0)
        {
            //数到9时执行的操作
            if(number = 9)
            {
                printf("第%d号下船了 \n",people[index]);
                people[index] = 0;      //设置下船人员编号为0
                count++;                //统计下船人数
            }

            //数数
            number++;
        }

        index++;

        //当index循环完，把index赋值为0，重新循环
        if(index == TOTAL_PEOPLE)
        {
            index = 0;
        }
    }

    return 0;
}