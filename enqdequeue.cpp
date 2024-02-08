#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int *data;
    int front;
    int rear;
    int size;
};
int isfull(struct queue *q)
{
    if (q->rear == q->size - 1)
    {
        return 1;
    }
    return 0;
}
int isempty(struct queue *q)
{
    if (q->front == q->rear)
    {
        return 1;
    }
    return 0;
}
void enque(struct queue *q, int a)
{
    if (isfull(q) == 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        q->rear++;
        q->data[q->rear] = a;
        printf("Enqueued element is:");
          printf("%d\n", a);
    }
}
int deque(struct queue *q)
{
    if (isempty(q) == 1)
    {
        printf("Queue is empty!!\n");
        return-1;
    }
    else
    {
        q->front++;
        return (q->data[q->front]);
    }
}
int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 5;
    q->data = (int *)malloc(q->size * sizeof(int));
    q->front = -1;
    q->rear = -1;
    enque(q, 5);
    enque(q,6);
    enque(q,7);
    enque(q,8);
    enque(q,8);
    enque(q,8);
    printf("Dequeued element %d\n",deque(q));
    return 0;
}