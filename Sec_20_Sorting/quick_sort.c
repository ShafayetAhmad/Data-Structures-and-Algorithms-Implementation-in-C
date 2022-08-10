#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void display_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void quick_sort(int arr[], int n)
{
    // int arr[] = {50, 30, 60, 90, 40, 80, 10, 20, 70};
    for (int i = 0; i < n; i++)
    {
        int j, k;
        for (j = i + 1, k = n - 1; j < k;)
        {
            if (arr[j] > arr[i] && arr[k] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
                j++, k--;
            }
            else if (arr[j] <= arr[i])
                j++;
            else
                k--;
        }
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int n = 9;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = rand() % 100;
    // }
    int arr[] = {50, 30, 60, 90, 40, 80, 10, 20, 70}; // unsorted array
    // int arr[] = {1, 4, 6, 8, 7}; // already sorted array

    quick_sort(arr, n);
    display_array(arr, n);

    // display_linked_list(root);
    return 0;
}