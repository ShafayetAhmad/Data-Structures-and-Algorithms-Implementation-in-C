#include <stdio.h>
#include <stdlib.h>

struct treeNode
{
    int data;
    struct treeNode *lchild;
    struct treeNode *rchild;
};

struct queueNode
{
    struct treeNode *node;
    struct queueNode *next;
} *front = NULL, *rear = NULL;

void enqueue(struct treeNode *tNode)
{
    if (front == NULL)
    {
        struct queueNode *temp;
        temp = (struct queueNode *)malloc(sizeof(struct queueNode));
        temp->node = tNode;
        temp->next = NULL;
        front = temp;
        rear = temp;
    }
    else
    {
        struct queueNode *temp;
        temp = (struct queueNode *)malloc(sizeof(struct queueNode));
        temp->node = tNode;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
}

struct treeNode *dequeue()
{
    struct queueNode *currQNode;
    currQNode = front;
    front = front->next;
    return currQNode->node;
}

void createTree(struct queueNode *q)
{

    struct treeNode *root, *currQNode;
    root = (struct treeNode *)malloc(sizeof(struct treeNode));

    printf("Enter root value: ");
    scanf("%d", &root->data);
    enqueue(root);
    while (front != NULL)
    {
        int x;
        currQNode = dequeue();
        printf("Enter Left Child value for %d: ", currQNode->data);
        scanf("%d", &x);
        if (x != -1)
        {
            currQNode->lchild = (struct treeNode *)malloc(sizeof(struct treeNode));
            currQNode->lchild->data = x;
            currQNode->lchild->lchild = currQNode->lchild->rchild = NULL;
            enqueue(currQNode->lchild);
        }
        printf("Enter Right Child value for %d: ", currQNode->data);
        scanf("%d", &x);
        if (x != -1)
        {
            currQNode->rchild = (struct treeNode *)malloc(sizeof(struct treeNode));
            currQNode->rchild->data = x;
            currQNode->rchild->lchild = currQNode->rchild->rchild = NULL;
            enqueue(currQNode->rchild);
        }
    }
}

int main()
{

    createTree(front);
    return 0;
}