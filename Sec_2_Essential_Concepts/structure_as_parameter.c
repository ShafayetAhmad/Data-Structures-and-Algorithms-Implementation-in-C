#include <stdio.h>

struct rect
{
    int width;
    int breadth;
};

int area(struct rect r1)
{
    return r1.width * r1.breadth;
}

int main()
{
    struct rect r = {5, 10};
    printf("%d\n", area(r));
}