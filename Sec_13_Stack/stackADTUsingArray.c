#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *s;
};

void push(struct stack *st, int element)
{
    if (st->top == st->size - 1)
        printf("Stack Overflow\n");
    else
    {
        st->s[++st->top] = element;
    }
}

int pop(struct stack *st)
{
    int x = -1;
    if (st->top == -1)
        printf("Stack Underflow\n");
    else
        x = st->s[st->top--];
    return x;
}

int peek(struct stack st, int pos)
{
    int x = -1;
    if (pos > st.top)
        printf("Invalid Position.\n");
    else
    {
        x = st.s[st.top - pos + 1];
    }
    return x;
}

int isEmpty(struct stack st)
{
    if (st.top < 0)
        return 1;
    else
        return 0;
}

int isFull(struct stack st)
{
    if (st.top >= st.size - 1)
        return 1;
    else
        return 0;
}

void display(struct stack st)
{
    for (int i = 0; i < st.top + 1; i++)
    {
        printf("%d ", st.s[i]);
    }
    printf("\n\n");
}

int main()
{
    int stackSize;
    printf("Enter the size of the stack: ");
    scanf("%d", &stackSize);
    struct stack st;
    st.top = -1;
    st.size = stackSize;
    st.s = (int *)malloc(stackSize * sizeof(int));

    // populate the stack
    for (int i = 0; i < 7; i++)
    {
        push(&st, i + 5);
    }

    display(st);

    // printf("%d poped\n", pop(&st));

    // display(st);
    // printf("Element at 3rd position is: %d\n", peek(st, 3));
    printf("Stack Full or Not: %d\n", isFull(st));
    printf("Stack Empty or Not: %d\n", isEmpty(st));

    return 0;
}