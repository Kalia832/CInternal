#include<stdio.h>
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

int main()
{
    numStack *s1=initStack();
    char pexp[size];
    int i=0,op1,op2,res;
    printf("Enter Your PostFix Expression:");
    scanf("%s",pexp);
    while(pexp[i]!='\0')
    {
            if(pexp[i]>='0'&&pexp[i]<='9')
            {
                push(s1,(pexp[i]-48));
            }
            else
            {
                op2=pop(s1);
                op1=pop(s1);
                switch(pexp[i])
                {

                    case '+':res=op1+op2;
                            break;
                    case '-':res=op1-op2;
                            break;
                    case '*':res=op1*op2;
                            break;
                    case '/':res=op1/op2;
                            break;
                    case '%':res=op1%op2;
                            break;
                    case '^':res=op1^op2;
                            break;
                    default:printf("Invalid Operator!!!");
                            exit(0);
                }
                push(s1,res);
            }//end of else
            i++;
    }//end of while
    printf("\nAfter Operation:%d",s1->item[0]);
    return 0;
}//end of main