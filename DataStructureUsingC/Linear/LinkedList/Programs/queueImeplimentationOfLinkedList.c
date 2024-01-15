//Queue Implementation of Linked List
#include<stdio.h>
#include<stdlib.h>

typedef struct sll
{
    int val;
    struct sll *next;
}SLL;

SLL* createNode()
{
    SLL *nd;
    nd=(SLL*)malloc(sizeof(SLL));
    nd->next=NULL;
    return nd;
}

SLL* insertEnd(SLL *st,int elm)
{
    SLL *nd,*q;
    nd=createNode();
    nd->val=elm;
    if(st==NULL)
    {
        return nd;
    }
    else
    {
        q=st;
        while(q->next!='\0')
        {
            q=q->next;
        }
        q->next=nd;
        return st;
    }
}

SLL * deleteBeg(SLL *st)
{
    SLL *q=st;
    if(q==NULL)
    {
        printf("\nList is Empty:!!");
        return NULL;
    }
    else
    {
        st=st->next;
        printf("\nDeleted Element is: %d",q->val);
        free(q);
        return st;
    }
}

void display(SLL *st)
{
    SLL *q=st;
    if(q->next==NULL)
    {
        printf("%d",q->val);
        return;
    }
    printf("%d ",q->val);
    display(q->next);
}

int main()
{
    int ch,elm;
    SLL *start=NULL;
    while(1)
    {
        printf("\nEnter Your choice:\n1.Insert\n2.Delete\n3.Display\n4.Exit\n==>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter An Element:");
                    scanf("%d",&elm);
                    start=insertEnd(start,elm);
                    break;
            case 2:start=deleteBeg(start);
                    break;
            case 3:display(start);
                    break;
            case 4:exit(0);
            default:printf("Invalid Option Selected!!");
        }
    }
}