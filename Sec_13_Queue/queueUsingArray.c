#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *A;
};

void enqueue(struct queue *q, int element)
{
    if (q->rear == q->size - 1)
        printf("Queue is Full.\n");
    else
    {
        q->A[++q->rear] = element;
    }
}

void dequeue(struct queue *q)
{
    q->front++;
}

int isFull(struct queue *q)
{
    if (q->rear == q->size - 1)
        return 1;
    else
        return 0;
}

int isEmpty(struct queue *q)
{
    if (q->rear == q->front)
        return 1;
    else
        return 0;
}

void display(struct queue *q)
{
    for (int i = q->front + 1; i <= q->rear; i++)
    {
        printf("%d ", q->A[i]);
    }
    printf("\n");
}

int main()
{
    struct queue q;
    printf("Enter size: ");
    scanf("%d", &q.size);
    q.A = (int *)malloc(sizeof(int));
    q.front = q.rear = -1;
    printf("Empty status: %d\n", isEmpty(&q));

    for (int i = 0; i < 5; i++)
    {
        enqueue(&q, i);
    }
    printf("Full status: %d\n", isFull(&q));
    dequeue(&q);
    display(&q);
    printf("Full status: %d\n", isFull(&q));

    return 0;
}