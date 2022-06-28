#include <stdio.h>

void leftShift(int arr[], int length)
{
    int shiftCount;
    printf("Shift by how many elements: ");
    scanf("%d", &shiftCount);
    int newI = length - shiftCount;
    for (int i = 0; i < length; i++, newI++)
    {
        if (newI >= length)
            arr[i] = 0;
        else
            arr[i] = arr[newI];
    }
}

int main()
{
    int length = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    leftShift(arr, 5);
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}