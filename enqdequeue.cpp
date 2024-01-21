#include<stdio.h>
#include<stdlib.h>
struct que
{
    int size;
    int front;
    int rear;
    int *arr;
};
int isempty(struct que *ptr)
{
    if(ptr->front==ptr->rear)
    {
        return 1;
    }
    return 0;
}
int isfull(struct que *qptr)
{
    if(qptr->rear==qptr->size-1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct que *q,int val)
{
    if(isfull(q)==1)
    {
        printf("Queue is full!!!\n");
    }
    else
    {
        q->rear++;
        q->arr[q->rear]=val;
        printf("The enqueued element is:%d\n",val);
    }
}
int dequeue(struct que *q)
{
    if(isempty(q)==1)
    {
        printf("Queue is empty!!!\n");
        return -1;
    }
    else
    {
        q->front++;
        return q->arr[q->front];
    }
}
int main()
{
    struct que *q=(struct que*) malloc(sizeof(struct que));
    q->size=5;
    q->front=q->rear=-1;
    q->arr=(int*) malloc(q->size*sizeof(int));
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    enqueue(q,6);
    // printf("The elements in the queue are:\n");
    // for (int i = 0; i < q->rear; i++)
    // {
    //     printf("%d\n",q->arr[i]);
    // }
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    printf("Dequeuing element %d\n", dequeue(q));
    // printf("The elements in the queue after dequing are:\n");
    // for (int i = q->front+1; i < q->rear; i++)
    // {
    //     printf("%d\n",q->arr[i]);
    // }
    return 0;
}