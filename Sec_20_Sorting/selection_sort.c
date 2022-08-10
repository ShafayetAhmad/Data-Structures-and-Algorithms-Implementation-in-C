#include <stdio.h>

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j, k;
        for (j = k = i; j < n; j++)
        {
            if (arr[j] < arr[k])
                k = j;
        }
        int temp = arr[i];
        arr[i] = arr[k];
        arr[k] = temp;
    }
}

void display_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[6] = {8, 6, 3, 2, 5, 4};
    selection_sort(arr, 6);
    display_array(arr, 6);

    return 0;
}