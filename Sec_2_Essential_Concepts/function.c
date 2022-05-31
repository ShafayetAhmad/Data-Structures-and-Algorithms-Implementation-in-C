#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 5;
    int b = 7;
    printf("%d\n", add(a, b));
}