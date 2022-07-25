#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
} *top = NULL;

void push(int element)
{
    struct stack *st = (struct stack *)malloc(sizeof(struct stack));

    st->data = element;
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
        printf("%d poped\n", top->data);
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

void display(struct stack *st)
{
    while (st != NULL)
    {
        printf("%d ", st->data);
        st = st->next;
    }
    printf("\n");
}

int main()
{
    isEmpty(top);
    push(10);
    push(20);
    push(30);
    push(40);
    display(top);
    pop();
    display(top);
    isEmpty(top);
    return 0;
}