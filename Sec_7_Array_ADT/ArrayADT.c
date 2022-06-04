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
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
    }
}

// function to search the index of given element
int search(struct Array *arr)
{
    int element;
    printf("Enter the element to search: ");
    scanf("%d", &element);
    for (int i = 0; i < arr->length; i++)
    {
        if (arr->A[i] == element)
            return i;
    }
    return -1;
}

// function to get the element of the given index
void get(struct Array *arr)
{
    int index;
    printf("Enter the index to get the element: ");
    scanf("%d", &index);
    printf("The element at index %d is %d\n", index, arr->A[index]);
}

void set(struct Array *arr)
{
    int index, value;
    printf("Enter the index and value to set: ");
    scanf("%d %d", &index, &value);
    if (index < arr->length)
    {
        arr->A[index] = value;
    }
    else
        ("Array index out of bound");
}

void maxmin(struct Array *arr)
{
    int max = arr->A[0];
    int min = arr->A[0];
    for (int i = 1; i < arr->length; i++)
    {
        if (max < arr->A[i])
            max = arr->A[i];
        if (min > arr->A[i])
            min = arr->A[i];
    }
    printf("%d is the maximum and %d is the minimum\n", max, min);
}

// function to reverse an Array (not working)
void reverse(struct Array *arr)
{
    int temp, n = arr->length;

    for (int i = 0; i > n; i++, n--)
    {
        temp = arr->A[i];
        arr->A[i] = arr->A[n];
        arr->A[n] = temp;
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
    // int index = search(&arr);
    // printf("Found at index %d\n",index);
    // display(arr);
    // get(&arr);
    // set(&arr);
    // maxmin(&arr);
    reverse(&arr);

    display(arr);

    return 0;
}