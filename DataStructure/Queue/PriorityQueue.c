#include <stdio.h>
#include <limits.h>

struct el
{
    int info;
    int priority;
};
typedef struct el Element;

struct Que
{
    Element arr[10];
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

void enQueue(Queue *p, Element e)
{
    int i;
    if (isFull(p))
        printf("Queue is full !");
    else
    {
        for (i = p->rear; i > 0; i--)
        {
            if (e.priority > p->arr[i].priority)
            {
                p->arr[i + 1] = p->arr[i];
                p->arr[i + 1] = e;
                p->rear++;

                break;
            }
        }
    }
}