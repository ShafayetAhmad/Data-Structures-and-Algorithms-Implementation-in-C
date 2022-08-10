#include <stdio.h>
#include <stdlib.h>
int *arr3;

int *merge(int arr1[], int arr2[], int m, int n)
{
    arr3 = (int *)malloc(sizeof(int) * (m + n));
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    for (; i < m; i++)
    {
        arr3[k++] = arr1[i++];
    }

    for (; j < n; j++)
    {
        arr3[k++] = arr2[j++];
    }
    return arr3;
}

void display(int *arr3, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");
}

int main()
{
    int arr1[3] = {1, 3, 5};
    int arr2[3] = {2, 4, 6};
    int *arr3 = merge(arr1, arr2, 3, 3);
    display(arr3, 6);
    return 0;
}