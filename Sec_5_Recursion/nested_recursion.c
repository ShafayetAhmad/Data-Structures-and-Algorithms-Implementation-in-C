#include <stdio.h>

void fun(int x)
{
    if (x > 0)
    {
        printf("%d\n", x);
        fun(fun(x - 1));
    }
}

void main()
{
    int num;
    scanf("%d", &num);
}