#include <stdio.h>
#include <stdlib.h>

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

void bubble_sor_for_array(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // comparision should run for n-1 times
    {
        int flag;
        for (int j = 0; j < n - 1 - i; j++) // swaping should run for n-1-i time as
        {                                   // after each swap 1 item gets sorted.
            flag = 0;
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag++;
            }
        }
        if (flag == 0)
            break;
    }
}

void bubble_sort_for_linked_list(struct Node *root)
{
}

void display_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
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
    // int arr[] = {8, 5, 7, 3, 2}; // unsorted array
    // int arr[] = {1, 4, 6, 8, 7}; // already sorted array
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = 8;
    root->next = NULL;
    createNode(root, 7);
    createNode(root, 6);
    createNode(root, 5);
    createNode(root, 3);

    // bubble_sor_for_array(arr, 5);
    // display_array(arr, 5);
    bubble_sort_for_linked_list(root);
    display_linked_list(root);
    return 0;
}