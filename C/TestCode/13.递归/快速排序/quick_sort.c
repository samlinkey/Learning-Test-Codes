#include <stdio.h>

void quickSort(int array[], int left, int right)
{
    int i = left, j = right;
    int temp;
    int pivot;

    pivot = 
}

int mian(void)
{
    int array[] = {73, 100, 111, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
    int i, length;

    length = sizeof(array) / sizeof(array[0]);
    quickSort(array, 0, length-1);
}