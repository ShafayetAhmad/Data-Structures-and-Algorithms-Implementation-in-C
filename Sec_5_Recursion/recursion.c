#include <stdio.h>

int mul(int x)
{
    if (x > 1)
        return mul(x - 1) * x;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", mul(num));
    return 0;
}