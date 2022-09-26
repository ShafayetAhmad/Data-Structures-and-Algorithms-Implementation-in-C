#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);

    } while (i < j);

    int temp = arr[l];
    arr[l] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(arr, l, h);
        quickSort(arr, l, j);
        quickSort(arr, j + 1, h);
    }
}

int main()
{
    int arr[] = {11, 13, 7, 12, 16, 9, 24, 5, 10, 3, __INT32_MAX__};
    quickSort(arr, 0, 10);
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}