#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

struct Node
{
    int data;
    struct Node *next;
} *root = NULL;

void createNode(struct Node *root, int data)
{
    while (root->next != NULL)
        root = root->next;
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    root->next = temp;
}

void insertion_sort_array(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = arr[i];
        int j = i - 1;
        while (j > -1 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}

void display_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void display_linked_list(struct Node *root)
{
    while (root != NULL)
    {
        printf("%d ", root->data);
        root = root->next;
    }
    printf("\n");
}

int main()
{
    int n = 30;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    // unsorted array
    // int arr[] = {1, 4, 6, 8, 7}; // already sorted array
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = 5;
    root->next = NULL;
    createNode(root, 6);
    createNode(root, 7);
    createNode(root, 8);

    insertion_sort_array(arr, n);
    display_array(arr, n);

    // display_linked_list(root);
    return 0;
}