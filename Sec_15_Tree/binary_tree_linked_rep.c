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

struct treeNode *createTree()
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
            currQNode->lchild->lchild = NULL;
            currQNode->lchild->rchild = NULL;
            enqueue(currQNode->lchild);
        }
        printf("Enter Right Child value for %d: ", currQNode->data);
        scanf("%d", &x);
        if (x != -1)
        {
            currQNode->rchild = (struct treeNode *)malloc(sizeof(struct treeNode));
            currQNode->rchild->data = x;
            currQNode->rchild->lchild = NULL;
            currQNode->rchild->rchild = NULL;
            enqueue(currQNode->rchild);
        }
    }
    return root;
}

void preorder(struct treeNode *node)
{
    if (node != NULL)
    {
        printf("%d ", node->data);
        preorder(node->lchild);
        preorder(node->rchild);
    }
}

void inorder(struct treeNode *node)
{
    if (node != NULL)
    {

        inorder(node->lchild);
        printf("%d ", node->data);
        inorder(node->rchild);
    }
}

void postorder(struct treeNode *node)
{
    if (node != NULL)
    {

        postorder(node->lchild);
        postorder(node->rchild);
        printf("%d ", node->data);
    }
}

int main()
{
    struct treeNode *root;
    root = createTree();
    printf("Preorder: ");
    preorder(root);
    printf("\n");
    printf("Inorder: ");

    inorder(root);
    printf("\n");
    printf("Postorder: ");

    postorder(root);
    printf("\n");

    return 0;
}