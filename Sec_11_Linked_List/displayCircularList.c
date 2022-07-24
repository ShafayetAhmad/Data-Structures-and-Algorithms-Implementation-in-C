#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} * first;

void createList(int A[], int n)
{
    struct Node *temp, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

int checkLoop(struct Node *n)
{
    struct Node *p, *q;
    p = q = n;
    do
    {
        p = p->next;
        q = q->next;
        q = q ? q->next : q;
    } while (p && q && p != q);
    if (p == q)
        return 1;
    else
        return 0;
}

void displayCircular(struct Node *n)
{

    do
    {
        printf("%d ", n->data);
        n = n->next;
    } while (n != first);

    printf("\n");
}

int main()
{
    int A[] = {2, 4, 6, 8, 1, 3};
    createList(A, 6);
    struct Node *t;
    t = first->next->next->next->next->next;
    t->next = first;
    // printf("%d\n", checkLoop(first));
    displayCircular(first);
    return 0;
}