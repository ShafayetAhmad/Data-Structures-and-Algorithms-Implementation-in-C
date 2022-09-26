#include <stdio.h>
#include <stdlib.h>

void heapInsert(int arr[], int n)
{
    // int arr[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     arr[i] = arr2[i];
    // }

    int temp = arr[n], i = n;
    while (i > 1 && temp > arr[i / 2])
    {
        arr[i] = arr[i / 2];
        i = i / 2;
    }
    arr[i] = temp;
}

void CreateHeap(int *arr, int n)
{
    for (int i = 2; i < n; i++)
    {
        heapInsert(arr, i);
    }
}

int main()
{
    int heapArr[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    CreateHeap(heapArr, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", heapArr[i]);
    }
    printf("\n");
}