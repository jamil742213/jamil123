#include <stdio.h>
#define N 5
int stack[N];
int top = -1;

void push();
void pop();
void peek();
void display();

void push()
{
    int x;
    printf("\nEnter the data\n ");
    scanf("%d", &x);
    if (top == N - 1)
    {
        printf("Overflow under condition\n");
    }
    else
        top++;
    stack[top] = x;
}
void pop()
{
    int item;
    if (top == -1)
    {
        printf("Underflowm conditions\n");
    }
    else
    {
        item = stack[top];
        top--;
        printf("%d", item);
    }
}
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d", stack[top]);
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}
void main()
{
    int ch;
    // clrscr();
    do
    {
        printf("\nEnter your choice\n1: push, \n2: pop,\n3: peek, \n4: display\n");
        scanf("%d", &ch);
        switch ((ch))
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;
        default:
            printf("Invalid options\n");
        }
    } while (ch != 0);
}