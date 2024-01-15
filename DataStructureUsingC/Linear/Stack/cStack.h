#include<stdlib.h>
#define size 100

typedef struct numStack
{
    char item[size];
    int top;
}charStack;

charStack* initStack()
{
    charStack *s;
    s=(charStack*)malloc(sizeof(charStack));
    s->top=-1;
    return s;
}

int isEmpty(charStack *s)
{
    return (s->top==-1);
    //if Stack is Empty it return 1 else 0;
}

int isFull(charStack *s)
{
    return (s->top==size-1);
    //if Stack is full it return 1 else 0;
}

void push(charStack *s,char elm)
{
    s->top++;
    s->item[s->top]=elm;
}

char pop(charStack *s)
{
    char elm;
    elm=s->item[s->top];
    s->item[s->top]=' ';
    s->top--;
    return elm;
}
char pick(charStack *s)
{
    return (s->item[s->top]);
}
void print(charStack *s)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(s->item[i]=='\0')
            break;
        printf("%c",s->item[i]);
    }
}