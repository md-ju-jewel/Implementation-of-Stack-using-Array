/// ** In the name of ALLAH ** ///

///Implementation of Stack Operations using Array in C (Push, Pop, Peek, Display)

#include <stdio.h>
#define N 5

int stack[N], top = -1;

void push(int x)
{
    if (top == N - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        item = stack[top];
        top--;
        printf("The item you popped out is %d\n", item);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("The Stack is Empty\n");
    }
    else
    {
        printf("Top is %d\n", stack[top]);
    }
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("The Stack is Empty\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    printf("Enter 5 elements to push to the stack: ");
    for (int i = 0; i < 5; i++)
    {
        int x;
        scanf("%d", &x);
        push(x);
    }

    display();
    peek();
    pop();
    printf("After popping out the top element: ");
    display();
    peek();

    return 0;
}

