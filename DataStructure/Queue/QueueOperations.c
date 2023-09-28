#include <stdio.h>
#include <limits.h>
struct Que
{
    int arr[10];
    int front;
    int rear;
};

typedef struct Que Queue;

void initialization(Queue *p)
{
    p->rear = -1;
    p->front = 0;
}

int isEmpty(Queue *p)
{
    return (p->front > p->rear ? 1 : 0);
}

int isFull(Queue *p)
{
    return (p->rear == 9 ? 1 : 0);
}

void enQueue(Queue *p, int data)
{
    if (isFull(p))
        printf("Queue is full !");
    else
    {
        p->rear++;
        p->arr[p->rear] = data;
    }
}

int deQueue(Queue *p)
{
    int val = INT_MIN;
    if (isEmpty(p))
        printf("Queue is empty !");
    else
    {
        val = p->arr[p->front];
        p->front++;
    }
    return val;
}

void display(Queue *p)
{
    if (isEmpty(p))
        printf("Queue is empty !");
    else
    {
        for (int i = p->front; i <= p->rear; i++)
        {
            printf("%d, ", p->arr[i]);
        }
    }
}

int main()
{
    Queue *ptr;
    int arr[100] = {0};
    ptr = arr;

    initialization(ptr);
    enQueue(ptr, 10);
    enQueue(ptr, 15);
    display(ptr);
    printf("\n");
    deQueue(ptr);

    display(ptr);
    return 1;
}
