struct Array
{
    int size;
    int lenght;
    int A[10];
};

struct Array mergeFun(struct Array arr_1, struct Array arr_2)
{
}

#include <stdio.h>
int main()
{
    struct Array arr1 = {4, 4, {2, 4, 6, 8}};
    struct Array arr2 = {4, 4, {3, 5, 7, 9}};
    struct Array mergedArr = {10, 8, {0}};
    mergeFun(arr1, arr2);

    return 0;
}