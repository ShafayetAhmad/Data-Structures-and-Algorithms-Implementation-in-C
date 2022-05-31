#include <stdio.h>
int main()
{
    struct student
    {
        char name[20];
        int roll;
    };

    struct student s1 = {"mohammad", 1};
    printf("%s\n", s1.name);
    printf("%d\n", s1.roll);
}