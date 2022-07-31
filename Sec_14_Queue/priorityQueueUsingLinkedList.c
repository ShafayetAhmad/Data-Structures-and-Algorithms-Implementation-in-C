#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
} *first = NULL;

void enqueue(struct queue *q, int element)
{
    if (q = NULL)
    {
        q = (struct queue *)malloc(sizeof(struct queue));
        q->data = element;
        q->next = NULL;
    }
    else
    {
        struct queue *p;
        while (q->data <= element)
        {
            p = q;
            q = q->next;
        }
        struct queue *t;
        t = (struct queue *)malloc(sizeof(struct queue));
        t->data = element;
        p->next = t;
        t->next = q;
    }
}

void display(struct queue *q)
{
    while (q != NULL)
    {
        printf("%d ", q->data);
        q = q->next;
    }
    printf("\n");
}

int main()
{

    for (int i = 0; i < 4; i++)
    {
        int x;
        scanf("%d", &x);
        enqueue(first, x);
    }
    // enqueue(q, 2);

    display(first);

    return 0;
}