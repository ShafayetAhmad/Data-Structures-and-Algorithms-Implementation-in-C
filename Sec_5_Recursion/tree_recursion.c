#include <stdio.h>

void print(int x)
{
    if (x > 0 && x < 10)
    {
        printf("%d\n", x);
        print(x - 1);
        print(x - 1);
    }
}

void main()
{
    int num;
    scanf("%d", &num);
    print(num);
}