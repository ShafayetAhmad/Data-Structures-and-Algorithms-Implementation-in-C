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

void display(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}

int middleTwo(struct Node *n)
{
    struct Node *p, *q;
    p = n;
    q = n;
    while (q->next != NULL)
    {
        p = p->next;
        if (q->next != NULL)
            q = q->next;
        if (q->next != NULL)
            q = q->next;
    }
    return p->data;
}

int main()
{
    int noOfElement = 0, middleElement = 0;
    int A[] = {2, 4, 6, 8, 1, 3, 9};
    createList(A, 7);
    display(first);
    middleElement = middleTwo(first);
    printf("Middle Of the list is %d\n", middleElement);

    return 0;
}