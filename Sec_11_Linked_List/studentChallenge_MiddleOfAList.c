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

int count(struct Node *n)
{
    int count = 0;
    while (n != NULL)
    {
        n = n->next;
        count++;
    }
    return count;
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

int middleOne(struct Node *n, int noOfElement)
{
    int count = (noOfElement / 2) + 1;

    for (int i = 1; i <= count; i++)
    {
        if (count == i)
            return n->data;
        n = n->next;
    }
}

int main()
{
    int noOfElement = 0, middleElement = 0;
    int A[] = {2, 4, 6, 8, 1, 3, 9, 11};
    createList(A, 8);
    display(first);
    noOfElement = count(first);
    middleElement = middleOne(first, noOfElement);
    printf("Middle Of the list is %d\n", middleElement);

    return 0;
}