#include <stdio.h>
#include <stdlib.h>

int maxNum(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

void count_sort(int arr[], int n)
{
    int max = maxNum(arr, n);
    int *count = (int *)malloc(sizeof(int) * max + 1);
    int j = 0;
    for (int i = 0; i < max; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    int i = 0;
    while (i < max + 1)
    {
        if (count[i]-- > 0)
            arr[j++] = i;
        else
            i++;
    }
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
    int n = 10;
    int arr[] = {6, 3, 9, 10, 15, 6, 8, 12, 3, 6};
    count_sort(arr, n);
    display(arr, n);
    return 0;
}