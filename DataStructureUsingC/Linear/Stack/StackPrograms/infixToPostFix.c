#include<stdio.h>
#include<stdlib.h>
#define size 30
typedef struct stk
{
    char item[size];
    int top;
}cStack;

cStack * initStack()
{
    cStack *nd=(cStack*)malloc(sizeof(cStack));
    nd->top=-1;
    return nd;
}
void push(cStack *st,char elm)
{
    st->item[++st->top]=elm;
}
char pop(cStack *st)
{
    // char temp=st->item[st->top];
    // st->top--;
    return (st->item[st->top--]);
}
int isFull(cStack *st)
{
    return (st->top==size-1);
}
int isEmpty(cStack *st)
{
    return (st->top==-1);
}
char pick(cStack *st)
{
    if(st->top==-1)
        return '0';
    return (st->item[st->top]);
}
int priority(char elm)
{
    switch(elm)
    {
        case '0':return -1;
        case '(':
        case ')':return 0;
        case '+':
        case '-':return 1;
        case '*':
        case '/':return 2;
        case '%':return 3;
        default:printf("invalid Operator %c",elm);
                exit(0);
    }
}
int main()
{
    cStack *operator=initStack();
    char str[size];char poststr[size],garbeg;
    int i=0,j=0,k;
    printf("Enter A infix Expression: ");//like this "(a+b*c)/(d-e)+f"
    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]>='a'&&str[i]<='z')//
        {
            poststr[j++]=str[i];
        }
        else if(str[i]==')')
        {
            while(pick(operator)!='(')
            {
                poststr[j++]=pop(operator);
            }
            pop(operator);
        }
        else
        {
            if(isEmpty(operator)==1)
            {
                push(operator,str[i]);
            }
            else if(str[i]=='(')
                push(operator,str[i]);
            else
            {
                while(priority(pick(operator))>priority(str[i]))
                {
                    poststr[j++]=pop(operator);
                }
                push(operator,str[i]);
            }
        } 
        i++;
    }
    while(isEmpty(operator)!=1)
        poststr[j++]=pop(operator);
    poststr[j]='\0';
    printf("%s",poststr);
}