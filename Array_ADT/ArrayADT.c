#include <stdio.h>
#include <stdlib.h>

void display(struct Array arr)
{
    printf("\nElements are:\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

struct Array
{
    int *A;
    int size;
    int length;
};

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
    for (int i = 0; i < elements; i++)
    {
        scanf("%d", &arr.A[i]);
        arr.length++;
    }

    display(arr);

    return 0;
}