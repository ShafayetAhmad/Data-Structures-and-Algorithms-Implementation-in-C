#include <stdio.h>
int main()
{
    int a = 5;
    int &r = a;
    printf("%d %d\n", a, r);
    r++;
    printf("%d %d\n", a, r);
    return 0;
}