#include <stdio.h>

// Here array is sent by refference. Array can not be sent by value in C or CPP
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int theArr[] = {1, 2, 3, 4, 5};
    printArray(theArr, 5);
}
