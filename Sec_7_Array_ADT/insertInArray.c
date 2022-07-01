
#include <stdio.h>
struct Array
{
    int size;
    int length;
    int A[10];
};

// Check If Array is sorted or not
int isSorted(struct Array arr1)
{
    for (int i = 0; i < arr1.length - 1; i++)
    {
        if (arr1.A[i] > arr1.A[i + 1])
            return 0;
    }
    return 1;
}

// Insert an element into the array
void insertInArray(struct Array arr, int num)
{
    for (int i = 0; i < arr.size; i++)
    {
        if (num < arr.A[i + 1])
        {
            rightShift(arr);
            arr.A[i] = num;
            arr.length++;
        }
    }
}

// Display the element of the array
void Display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\t", arr.A[i]);
    }
    printf("\n");
}

// shift the element to the right for one space
void rightShiftForInsert(struct Array arr, int num)
{
    if (arr.length < arr.size)
    {
        int i = arr.length;
        while (arr.A[i] < num)
        {
            arr.A[i + 1] = arr.A[i];
        }
        arr.A[i] = num;
    }
    else
        printf("Array is already full. \n");
}

int main()
{
    struct Array arr = {10, 7, {2, 3, 5, 6, 7, 8, 9}};
    int num = 7;
    if (isSorted(arr) == 1)
    {
        insertInArray(arr, num);
    }
    Display(arr);

    return 0;
}