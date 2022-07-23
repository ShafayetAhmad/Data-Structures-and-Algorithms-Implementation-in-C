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

// void reverse(struct Node *p)
// {
//     p = first;
//     struct Node *q = NULL, *r = NULL;
//     while (p != NULL)
//     {
//         r = q;
//         q = p;
//         p = p->next;
//         q->next = r;
//     }
//     first = q;
// }

void reverse(struct Node *p)
{

    struct Node *r = NULL, *q = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
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
    int A[] = {2, 4, 6, 8, 1, 3};
    createList(A, 6);
    reverse(first);
    display(first);
    return 0;
}