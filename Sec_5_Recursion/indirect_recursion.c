#include <stdio.h>

void funX(int x)
{
    if (x > 0)
    {
        printf("%d\n", x);
        funY(x - 1);
    }
}

void funY(int y)
{
    if (y > 0)
    {
        printf("%d\n", y);
        funX(y / 2);
    }
}

void main()
{
    int num;
    scanf("%d", &num);
    funX(num);
}