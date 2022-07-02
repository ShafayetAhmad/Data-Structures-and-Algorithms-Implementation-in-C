
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
// void insertInArray(struct Array arr, int num)
// {
//     for (int i = 0; i < arr.size; i++)
//     {
//         if (num < arr.A[i + 1])
//         {
//             rightShift(arr);
//             arr.A[i] = num;
//             arr.length++;
//         }
//     }
// }

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
void insertInArray(struct Array *arr1, int num)
{
    if (arr1->length < arr1->size)
    {
        int i = arr1->length - 1;
        while (arr1->A[i] > num)
        {
            arr1->A[i + 1] = arr1->A[i];
            i--;
        }
        arr1->A[i + 1] = num;
        arr1->length++;
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
        insertInArray(&arr, num);
    }
    else
        printf("Array Not Sorted\n");
    Display(arr);

    return 0;
}