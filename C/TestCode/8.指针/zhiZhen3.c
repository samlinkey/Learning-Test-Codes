#include <stdio.h>

double getAverage(int *arr, int size);

//传递数组到函数，计算数组的平均值
int main()
{
    //带有5个元素的整型数组
    int balace[5] = {1000, 2, 3, 17, 50};
    double avg;

    //传递一个数组指针作为参数
    avg = getAverage( balace, 5 );

    //输出返回值
    printf("Average value is: %f \n", avg);

    return 0;

}

double getAverage(int *arr, int size)
{
    int i, sum = 0;
    double avg;

    for ( i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    avg = (double)sum / size;
    
    return avg;
    
}