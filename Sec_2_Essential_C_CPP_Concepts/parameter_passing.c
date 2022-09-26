#include <stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap1(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 5, b = 10;
    printf("Pass By Value.");
    // before swap
    printf("%d %d\n", a, b);
    swap(a, b);
    // after swap
    printf("%d %d\n", a, b);

    printf("Pass by address.");
    // before swap
    printf("%d %d\n", a, b);
    swap1(&a, &b);
    // after swap
    printf("%d %d\n", a, b);
}