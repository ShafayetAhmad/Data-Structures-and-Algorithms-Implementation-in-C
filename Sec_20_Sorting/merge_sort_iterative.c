#include <stdio.h>

void merge(int arr[], int low, int high, int mid, int secLow)
{

    // int arr[] = {2, 5, 8, 12, 3, 6, 7, 10};
    int theArr[high + 1];
    int k = 0;
    while (low <= mid && secLow <= high)
    {
        if (arr[low] < arr[secLow])
            theArr[k++] = arr[low++];
        else
            theArr[k++] = arr[secLow++];
    }

    while (low <= mid)
    {
        theArr[k++] = arr[low++];
    }
    while (secLow <= high)
    {
        theArr[k++] = arr[secLow++];
    }

    for (int i = 0; i <= high; i++)
    {
        arr[i] = theArr[i];
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n = 8;
    int low = 0;
    int high = n - 1;
    int mid = (high + low) / 2;
    int secLow = mid + 1;
    int arr[] = {2, 5, 8, 12, 3, 6, 7, 10};

    merge(arr, low, high, mid, secLow);
    display(arr, high);

    return 0;
}