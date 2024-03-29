#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Error: Stack overflow!\n");
        return;
    }
    stack[++top] = value;
}

int pop()
{
    if (top == -1)
    {
        printf("Error: Stack underflow!\n");
        return -1;
    }
    return stack[top--];
}
void display(int stack[], int n)
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The elements in the array are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;

        case 2:
            value = pop();
            if (value != -1)
            {
                printf("Popped value: %d\n", value);
            }
            break;
        case 3:
            display(stack, top);
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}