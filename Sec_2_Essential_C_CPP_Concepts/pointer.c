#include <stdio.h>
int main()
{
    int *p;             // pointer variable
    int a = 5;          // integer variable
    p = &a;             // address of variable a is assigned to pointer p
    printf("%d\n", *p); // value of a accessed via pointer p
    return 0;
}