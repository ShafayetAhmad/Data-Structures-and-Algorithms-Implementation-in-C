#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} * first;

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
        last->next = temp;
        temp->prev = last;
        temp->next = NULL;
        last = temp;
    }
}

void displayDouble(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
}

void reverse(struct Node *n)
{
    struct Node *temp;
    while (n != NULL)
    {
        temp = n->next;
        n->next = n->prev;
        n->prev = temp;
        n = n->prev;
        if (n != NULL && n->next == NULL)
            first = n;
    }
}

int main()
{
    int arr[] = {1, 3, 5, 7};
    createList(arr, 4);
    reverse(first);
    displayDouble(first);
    return 0;
}