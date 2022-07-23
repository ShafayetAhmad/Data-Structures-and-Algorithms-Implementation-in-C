#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} * first;

struct Node *createList(int A[], int n)
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
    return first;
}

struct Node *merge(struct Node *firstList, struct Node *secondList)
{
    struct Node *mergedList, *tailOfMerged;
    if (firstList->data < secondList->data)
    {
        mergedList = tailOfMerged = firstList;
        mergedList->next = NULL;
        firstList = firstList->next;
    }
    else
    {

        mergedList = tailOfMerged = secondList;

        secondList = secondList->next;
        mergedList->next = NULL;
    }
    while (firstList != NULL && secondList != NULL)
    {
        if (firstList->data < secondList->data)
        {
            tailOfMerged->next = firstList;
            tailOfMerged = firstList;
            firstList = firstList->next;
            tailOfMerged->next = NULL;
        }
        else
        {
            tailOfMerged->next = secondList;
            tailOfMerged = secondList;
            secondList = secondList->next;
            tailOfMerged->next = NULL;
        }
    }
    if (firstList != NULL)
    {
        tailOfMerged->next = firstList;
        tailOfMerged = firstList;
        tailOfMerged->next = NULL;
    }
    else
    {
        tailOfMerged->next = secondList;
        tailOfMerged = secondList;
        tailOfMerged->next = NULL;
    }
    return mergedList;
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
    int A[] = {2, 4, 6, 8};
    int B[] = {1, 3, 5, 7, 9};

    struct Node *firstList, *secondList;
    firstList = createList(A, 4);
    secondList = createList(B, 5);

    struct Node *mergedList = merge(firstList, secondList);
    display(mergedList);
    return 0;
}