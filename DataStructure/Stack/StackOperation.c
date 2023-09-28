#include <stdio.h>

struct stk
{
    int arr[10];
    int top;
};
typedef struct stk stack;

int isEmpty(stack *p)
{
    return (p->top == 1 ? 1 : 0);
}

void push(stack *p, int data)
{
    if (isEmpty(p))
        printf("Stack is empty !");
    else
    {
        p->top++;
        p->arr[p->top] = data;
    }
}

char pop(stack *p)
{
    char temp;
    if (isEmpty(p))
        return '\0';
    else{
        temp=p->arr[p->top];
        p->top--;
        return temp;
    }
}


int main(){
    
    return 1;
}