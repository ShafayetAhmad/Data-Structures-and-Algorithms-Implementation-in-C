#include <stdio.h>

int powerFun(int base_, int power_)
{
    if (power_ > 2)
        return base_ * powerFun(base_, power_ - 1);
    return base_ * base_;
}

void main()
{
    int base, power;
    scanf("%d %d", &base, &power);
    printf("%d\n", powerFun(base, power));
}