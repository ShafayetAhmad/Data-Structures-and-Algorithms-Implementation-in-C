#include <stdio.h>

int mul(int x)
{
    if (x > 1)
        return x * mul(x - 1);
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", mul(num));
    return 0;
}