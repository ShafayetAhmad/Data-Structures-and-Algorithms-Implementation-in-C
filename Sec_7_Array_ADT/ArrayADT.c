#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

// Function to display the array
void display(struct Array arr)
{
    printf("\nElements are:\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

// functin to add/append and element at the end of the array;
void add(struct Array *arr, int num)
{
    arr->A[arr->length] = num;
    arr->length++;
}

// function to insert an element in a given index
//  void insert(struct Array arr,)

int main()
{
    int elements, lastElement;
    struct Array arr;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    // insert elements
    printf("Numbers of elements to be inserted: ");
    scanf("%d", &elements);
    printf("Enter %d elements: ", elements);
    for (int i = 0; i < elements; i++)
    {
        scanf("%d", &arr.A[i]);
        arr.length++;
    }
    printf("Enter the number to be inserted at the end: ");
    scanf("%d", &lastElement);
    add(&arr, lastElement);
    display(arr);

    return 0;
}