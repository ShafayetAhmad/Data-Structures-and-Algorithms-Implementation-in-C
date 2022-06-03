#include <stdio.h>

int sum(int x)
{
    if (x > 0)
        return x + sum(x - 1);
}

void main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", sum(num));
}