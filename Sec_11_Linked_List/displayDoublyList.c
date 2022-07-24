#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} *first = NULL;

void createList(int A[], int n)
{
    struct Node *temp, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));

        temp->data = A[i];
        temp->next = NULL;
        temp->prev = last;
        last->next = temp;
        last = temp;
    }
}

void DisplayDoubly(struct Node *n)
{
    while (n->next != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}

int main()
{
    int A[] = {2, 4, 5, 6, 7, 8};
    createList(A, 6);
    DisplayDoubly(first);

    return 0;
}