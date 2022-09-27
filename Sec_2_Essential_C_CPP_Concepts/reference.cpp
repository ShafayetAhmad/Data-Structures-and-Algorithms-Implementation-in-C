
// refference is only available in C++ not in C

#include <stdio.h>
int main()
{
    int a = 5;
    int &r = a; // refference variable r is reffering to variable a
    printf("%d %d\n", a, r);
    r++; // as r increased by 1 a will also increase by 1 as both a and r reffering to same address
    printf("%d %d\n", a, r);
    return 0;
}