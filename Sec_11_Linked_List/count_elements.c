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

int count(struct Node *n)
{
    int count = 0;
    while (n != NULL)
    {
        count++;
        n = n->next;
    }
    return count;
}

int sum(struct Node *n)
{
    int sum = 0;
    while (n != NULL)
    {
        sum += n->data;
        n = n->next;
    }
    return sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    createList(arr, 9);
    printf("Elements: %d\n", count(first));
    printf("Sum: %d\n", sum(first));

    return 0;
}