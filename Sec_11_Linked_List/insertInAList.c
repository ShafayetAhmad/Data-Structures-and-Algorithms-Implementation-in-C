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

void insertOnGivenIndex(int index, int element)
{
    if (index == 0)
    {
        struct Node *temp;
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = element;
        temp->next = first;
        first = temp;
    }
    else
    {
        int count = 0;
        struct Node *new, *n;
        n = first;
        new = (struct Node *)malloc(sizeof(struct Node));
        new->data = element;
        while (n != NULL)
        {
            if (count == index - 1)
            {
                new->next = n->next;
                n->next = new;
                break;
            }
            n = n->next;
            count++;
        }
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
    int A[] = {2, 4, 6, 8, 1, 3};
    createList(A, 6);
    display(first);
    // insertBeforeFirstNode(9);
    insertOnGivenIndex(0, 15);
    insertOnGivenIndex(3, 17);

    display(first);
    return 0;
}