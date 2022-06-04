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
void append(struct Array *arr)
{
    int lastElement;
    printf("Enter the number to be inserted at the end: ");
    scanf("%d", &lastElement);
    if (arr->length < arr->size)
    {
        arr->A[arr->length] = lastElement;
        arr->length++;
    }
    else
        printf("Sorry, can't add element. Array is already full");
}

// function to insert an element in a given index
void insert(struct Array *arr)
{
    int index, elementToInsert;
    printf("Enter the index and element to enter: ");
    scanf("%d %d", &index, &elementToInsert);
    if (arr->length < arr->size)
    {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = elementToInsert;
        arr->length++;
    }
    else
        printf("Sorry, can not insert element as the array is already full");
}

// funciton to delete and element from given index
void delete (struct Array *arr)
{
    int index;
    printf("Enter the index of the element to be deleted: ");
    scanf("%d", &index);
    if (index < arr->length)
    {
    }
}

// Driver Code
int main()
{
    int elements;
    struct Array arr;
    printf("Enter the size of the array: ");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    // insert elements
    printf("Numbers of elements to be inserted: ");
    scanf("%d", &elements);
    if (elements < arr.size)
    {
        printf("Enter %d elements: ", elements);
        for (int i = 0; i < elements; i++)
        {
            scanf("%d", &arr.A[i]);
            arr.length++;
        }
    }

    // append(&arr);
    // insert(&arr);
    // delete(&arr);
    display(arr);

    return 0;
}