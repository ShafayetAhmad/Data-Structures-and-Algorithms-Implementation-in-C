#include <stdio.h>
int main()
{
    struct Rect
    {
        int width;
        int breadth;
    };

    struct Rect r1 = {5, 10};
    struct Rect *p = &r1;

    // To access using normal variable we use dot operator
    printf("%d\n", r1.width);
    printf("%d\n", r1.breadth);

    // To access using pointer variable we use arrow
    printf("%d\n", p->width);
    printf("%d\n", p->breadth);
}
