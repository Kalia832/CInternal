#include<stdlib.h>
#define size 100

typedef struct numStack
{
    int item[size];
    int top;
}numStack;

numStack* initStack()
{
    numStack *s;
    s=(numStack*)malloc(sizeof(numStack));
    s->top=-1;
    return s;
}

int isEmpty(numStack *s)
{
    return (s->top==-1);
    //if Stack is Empty it return 1 else 0;
}

int isFull(numStack *s)
{
    return (s->top==size-1);
    //if Stack is full it return 1 else 0;
}

void push(numStack *s,int elm)
{
    s->top++;
    s->item[s->top]=elm;
}

int pop(numStack *s)
{
    int elm;
    elm=s->item[s->top];
    s->top--;
    return elm;
}
int pick(numStack *s)
{
    return (s->item[s->top]);
}