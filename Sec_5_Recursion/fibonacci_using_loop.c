#include <stdio.h>
void main()
{
    int num;
    scanf("%d", &num);
    int a = 0, b = 1, s;
    for (int i = 1; i < num; i++)
    {
        s = a + b;
        a = b;
        b = s;
    }
    printf("%d\n", s);
}