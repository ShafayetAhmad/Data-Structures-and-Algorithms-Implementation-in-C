#include <stdio.h>

void reverse(int arr[], int length)
{
}

int main()
{
    int length = 8;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("Before Reverse: ");

    for (int i = 0; i <= length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i <= length / 2; i++)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[length - i];
        arr[length - i] = temp;
    }

    printf("After Reverse: ");
    for (int i = 0; i <= length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}