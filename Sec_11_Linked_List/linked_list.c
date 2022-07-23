#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} * first;

void createList(int arr[], int n)
{
    struct Node *last, *temp;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = arr[i];
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

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    createList(arr, 9);
    display(first);
    return 0;
}