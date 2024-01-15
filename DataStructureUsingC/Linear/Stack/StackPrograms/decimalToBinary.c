#include<stdio.h>
#include<stdlib.h>
#define size 50
typedef struct stk
{
    int item[size];
    int top;
}nStack;
nStack * initStack()
{
    nStack *nd=(nStack*)malloc(sizeof(nStack));
    nd->top=-1;
    return nd;
}
void push(nStack *st,int elm)
{
    st->item[++st->top]=elm;
}
int pop(nStack *st)
{
    return st->item[st->top--];
}
int main()
{
    int num;
    nStack *st=initStack();
    printf("\nEnter a number:");
    scanf("%d",&num);
    while(num)
    {
        push(st,(num%2));
        num/=2;
    }
    while(st->top!=-1)
        printf("%d ",pop(st));
    return 0;
}