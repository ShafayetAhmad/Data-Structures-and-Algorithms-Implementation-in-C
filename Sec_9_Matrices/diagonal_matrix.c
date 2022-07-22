#include <stdio.h>

struct Matrix
{
    int arr[10];
    int size;
};

void set(struct Matrix *m, int i, int j, int x)
{
    if (i == j)
        m->arr[i] = x;
}

int get(struct Matrix m, int i, int j)
{
    if (i == j)
        return m.arr[i];
    else
        return 0;
}

void display(struct Matrix m)
{
    printf("The Matrix: \n");
    for (int i = 0; i < m.size; i++)
    {
        for (int j = 0; j < m.size; j++)
        {
            printf("%d ", get(m, i, j));
        }
        printf("\n");
    }
}

int main()
{
    struct Matrix m;
    m.size = 5;
    for (int i = 0; i < 5; i++)
    {
        set(&m, i, i, i + 5);
    }
    display(m);

    return 0;
}