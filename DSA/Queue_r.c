#include<stdio.h>
#define MAX 100

void insert();
void delete();
void display();
int queue_array[MAX];
int rear = -1;
int front = -1;

int main()
{
    int choice;

    while (1)
    {
        printf("1. Insert element to queue \n");
        printf("2. delete element to queue \n");
        printf("3. display element to queue \n");
        printf("4. Quit \n");
        printf("Enter your choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
            break;
        
        default:
            printf("Invalid choice");
        }
    }
    return 0;
}
void insert()
{
    int add_item;
    if(rear == MAX - 1)
        printf("Queue overflow");
    else
    {
        if (front == -1)
        {
            front = 0;
        printf("Insert the element in queue; ");
        scanf("%d", &add_item);
        rear = rear +1;
        queue_array[rear] = add_item;
        }
        
    }
}
void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is underflow");
        return;

    }
    else
    {
        printf("Element delete from queue is %d \n", queue_array[front]);
        front = front +1;

    }
    
}

void display()
{
    int i;
    if (front == -1)
    {
        printf("Queue is empty");

    }
    else
    {
        printf("Queue is empty");
        for ( i = front; i <= rear; i++)
        {
            printf("%d ", queue_array[i]);
        }
        printf("\n");
        
    }
    
}