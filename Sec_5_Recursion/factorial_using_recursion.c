#include <stdio.h>

int fact(int x)
{
    if (x > 1)
        return x * fact(x - 1);
}

void main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", fact(num));
}