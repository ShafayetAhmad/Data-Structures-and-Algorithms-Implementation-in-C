#include <stdio.h>
#include <stdlib.h>

struct treeNode
{
    int data;
    struct treeNode *lchild;
    struct treeNode *rchild;
};

//...............For Stack...........................
struct stack
{
    struct treeNode *node;
    struct stack *next;
} *top = NULL;

void push(struct treeNode *node, struct stack *top)
{
    struct stack *st = (struct stack *)malloc(sizeof(struct stack));

    st->node = node;
    st->next = top;
    top = st;
}

int pop()
{
    if (top == NULL)
        printf("Stack is Empty.");
    else
    {
        struct stack *t = top;
        top = top->next;
        free(t);
    }
}

int isEmpty(struct stack *st)
{
    if (st == NULL)
        printf("Stack is Empty.\n");
    else
        printf("Stack is not empty.\n");
}

//.......................................................

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

int main()
{
    struct treeNode *root;
    root = createTree();
    preorder(root);
    printf("\n");

    return 0;
}