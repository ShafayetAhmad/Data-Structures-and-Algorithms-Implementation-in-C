#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * front, *rear;

void enqueue(struct node *q, int element)
{
    struct node *temp;
    temp->data = element;
    temp->next = NULL;
    q->next = temp;
    q = temp;
    rear = q;
}

void display(struct node *q)
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
    struct node *queue;
    front = rear = queue;
    queue = (struct node *)malloc(sizeof(struct node));
    queue->data = 5;
    queue->next = NULL;
    front = queue;
    enqueue(queue, 10);
    enqueue(queue, 15);
    display(front);

    return 0;
}