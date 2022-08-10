#include <stdio.h>

int *merge(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0, k = 0;
    int arr3[m + n];
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    for (; i < m; i++)
    {
        arr3[k++] = arr1[i];
    }
    for (; j < m; j++)
    {
        arr3[k++] = arr2[j];
    }
    return arr3;
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr1[] = {2, 4, 6};
    int arr2[] = {1, 3, 5};
    int *arr3 = merge(arr1, arr2, 3, 3);
    display(arr3, 6);
    return 0;
}