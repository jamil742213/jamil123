#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Queue
{
    int size;
    int f;
    int r;
    int* arr;

};
int isFull(struct Queue *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct Queue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct Queue *q, int val)
{
    if(isFull(q))
    {
        printf("This is queue is full");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
};
int dequeue(struct Queue *q)
{
    int a = -1;
    if(isEmpty(q))
    {
        printf("This is queue is full");
    }
    else
    {
        q->f++;
        q->arr[q->f];
    }
    return a;

};

int main()
{
    struct  Queue q;
        q.size = 100;
        q.f = q.r = -1;
        q.arr = (int*) malloc(q.size*sizeof(int));
    // if(isEmpty(&q)){

    //     printf("Queue is empty");
    // }
    //Enqueue few elements
    enqueue(&q, 12);   
    enqueue(&q, 15);  
    enqueue(&q, 1);  
    printf("Dequeueing  element %d \n", dequeue(&q));
    printf("Dequeueing  element %d \n", dequeue(&q));
    if(isEmpty(&q)){

        printf("Queue is empty");
    }
    if(isFull(&q)){

        printf("Queue is Full");
    }
    return 0;
}