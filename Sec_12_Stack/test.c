#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int s[5];
};

void push(struct stack *st, int element)
{
    if (st->top == st->size - 1)
        printf("Stack Overflow");
    else
    {
        st->s[st->top++] = element;
    }
}

void display(struct stack st)
{
    for (int i = 0; i < st.top + 1; i++)
    {
        printf("%d ", st.s[i]);
    }
    printf("\n");
}

int main()
{
    // int stackSize;
    // printf("Enter the size of the stack: ");
    // scanf("%d", &stackSize);
    struct stack st;
    st.top = -1;
    st.size = 5;
    // st.s = (int *)malloc(stackSize * sizeof(int));
    push(&st, 5);
    display(st);

    return 0;
}