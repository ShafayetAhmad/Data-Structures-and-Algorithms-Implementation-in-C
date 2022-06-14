#include <stdio.h>

void reverse(int arr[], int length)
{
}

int main()
{
    int length = 8;
    int arr[] = {1, 4, 3, 5, 7, 6, 8, 2, 10};

    for (int i = 0; i <= length / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[length - i];
        arr[length - i] = temp;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}