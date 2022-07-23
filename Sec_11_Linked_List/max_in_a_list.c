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

int max(struct Node *n)
{
    int max = n->data;
    int min = n->data;
    while (n != NULL)
    {

        if (n->data > max)
            max = n->data;
        n = n->next;
    }
    return max;
}
int min(struct Node *n)
{
    int max = n->data;
    int min = n->data;
    while (n != NULL)
    {

        if (n->data < min)
            min = n->data;
        n = n->next;
    }
    return min;
}

int main()
{
    int arr[] = {34, 65, 21, 25, 57, 23};
    createList(arr, 6);
    printf("Max is: %d\n", max(first));
    printf("Min is: %d\n", min(first));

    return 0;
}