
#include <stdio.h>
struct Array
{
    int size;
    int length;
    int A[10];
};

int isSorted(struct Array arr1)
{
    for (int i = 0; i < arr1.length - 1; i++)
    {
        if (arr1.A[i] > arr1.A[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    struct Array arr = {10, 7, {2, 3, 5, 6, 7, 8, 9}};
    printf("%d\n", isSorted(arr));
    return 0;
}