#include <stdio.h>

void leftShift(int arr, int length)
{
    int shiftElement;
    printf("Shift by how many elemnt: ");
    scanf("%d", &shiftElement);
    while (shiftElement--)
    {
        for (int i = length; i >= 0; i--)
        {
            /* code */
        }
    }
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    leftShift(arr, 8);
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}