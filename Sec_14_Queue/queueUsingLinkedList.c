#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int data;
    struct queue *next;
} *front = NULL, *rear = NULL;

void enqueue(struct queue *qu, int element)
{
    if (front == NULL)
    {

        front = rear = qu;
        qu->data = element;
        qu->next = NULL;
    }
    else
    {
        struct queue *t;
        t = (struct queue *)malloc(sizeof(struct queue));
        t->data = element;
        t->next = NULL;
        rear->next = t;
        rear = t;
    }
}

void dequeue()
{
    printf("%d removed.\n", front->data);
    struct queue *t;
    t = front;
    front = front->next;
    free(t);
}

void isEmpty()
{
    if (front == NULL)
        printf("Queue is empty.\n");
    else
        printf("No, Queue is not empty.\n");
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
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    isEmpty();
    enqueue(q, 5);
    enqueue(q, 6);
    enqueue(q, 7);
    display(front);
    dequeue();
    display(front);
    isEmpty();

    return 0;
}