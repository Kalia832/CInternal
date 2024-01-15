//Stack Implimantations of Linked List
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
SLL * deleteEnd(SLL *st)
{
    SLL *q=st,*p;
    if(q==NULL)
    {
        printf("\nList is Empty:!!");
        return NULL;
    }
    else
    {
        if(q->next==NULL)
        {
            printf("\nDeleted Element is: %d",q->val);
            free(q);
            return NULL;
        }
        else
        {
            while(q->next!='\0')
            {
                p=q;
                q=q->next;
            }
            printf("\nDeleted Element is: %d",q->val);
            free(q);
            p->next=NULL;
            return st;
        }
    }
}

void display(SLL *st)
{
    SLL *q=st;
    if(q->next==NULL)
    {
        printf("|| %d ||",q->val);
        return;
    }
    display(q->next);
    printf("\n|| %d ||",q->val);
}

int main()
{
    int ch,elm;
    SLL *start=NULL;
    while(1)
    {
        printf("\nEnter Your choice:\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n==>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter An Element:");
                    scanf("%d",&elm);
                    start=insertEnd(start,elm);
                    break;
            case 2:start=deleteEnd(start);
                    break;
            case 3:display(start);
                    break;
            case 4:exit(0);
            default:printf("Invalid Option Selected!!");
        }
    }
}