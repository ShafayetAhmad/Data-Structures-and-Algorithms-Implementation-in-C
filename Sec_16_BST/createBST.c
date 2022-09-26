#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *insert(struct node *root, int data)
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->data = data;
        root->left = root->right = NULL;
        return root;
    }
    else if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return NULL;
}

void printBST(struct node *root)
{
    if (root != NULL)
    {
        printBST(root->left);
        printf("%d ", root->data);
        printBST(root->right);
    }
}

int main()
{
    struct node *root;
    root = insert(root, 20);
    insert(root, 10);
    insert(root, 25);
    printBST(root);

    return 0;
}