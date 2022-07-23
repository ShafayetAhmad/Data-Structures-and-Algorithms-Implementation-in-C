#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} * first, *last;

void createNode(int element)
{
    if (first == NULL)
    {
        first = (struct Node *)malloc(sizeof(struct Node));
        first->data = element;
        first->next = NULL;
        last = first;
    }
    else
    {
        struct Node *temp;
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = element;
        last->next = temp;
        last = temp;
    }
}

void display(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}

int main()
{
    for (int i = 1; i < 10; i++)
    {
        createNode(i);
    }

    display(first);
    return 0;
}