#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int size;
    int lenght;
    int A[10];
};

struct Array *mergeFun(struct Array *arr_1, struct Array *arr_2)
{
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));
    int i, j, k;
    i = j = k = 0;
    arr3->size = arr_2->size + arr_1->size;
    arr3->lenght = arr_1->lenght + arr_2->lenght;
    while (i < arr_1->lenght && j < arr_2->lenght)
    {
        if (arr_1->A[i] < arr_2->A[j])
            arr3->A[k++] = arr_1->A[i++];
        else
            arr3->A[k++] = arr_2->A[j++];
    }
    for (; i < arr_1->lenght; i++)

        arr3->A[k++] = arr_1->A[i++];
    for (; j < arr_2->lenght; j++)

        arr3->A[k++] = arr_2->A[j++];

    return arr3;
}

void Display(struct Array arr)
{
    for (int i = 0; i < arr.lenght; i++)
    {
        printf("%d\t", arr.A[i]);
    }
    printf("\n");
}

int main()
{
    struct Array arr1 = {4, 4, {2, 4, 6, 8}};
    struct Array arr2 = {4, 4, {3, 5, 7, 9}};
    struct Array mergedArr = {10, 8, {0}};
    struct Array *arr3 = mergeFun(&arr1, &arr2);
    Display(*arr3);

    return 0;
}