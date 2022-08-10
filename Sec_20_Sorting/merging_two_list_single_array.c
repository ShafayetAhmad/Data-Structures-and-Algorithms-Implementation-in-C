#include <stdio.h>
#include <stdlib.h>

int *finArr;

void merge(int arr2[], int n)
{
    int arr[8] = {2, 5, 8, 12, 3, 6, 7, 10};
    int low = 0, high = n - 1, mid = ((high + low) / 2), secLow = mid + 1, k = 0;
    finArr = (int *)malloc(sizeof(int) * n);
    while (low <= mid && secLow <= high)
    {
        if (arr[low] < arr[secLow])
            finArr[k++] = arr[low++];
        else
            finArr[k++] = arr[secLow++];
    }
    while (low <= mid)
    {
        finArr[k++] = arr[low++];
    }
    while (secLow <= high)
    {
        finArr[k++] = arr[secLow++];
    }
}

void display(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[8] = {2, 5, 8, 12, 3, 6, 7, 10};
    merge(arr, 8);
    display(finArr, 8);

    return 0;
}