//GENERAL FUNCTIONS RELATED TO SINGLE LINKED LIST
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
SLL * insertBeg(SLL *st,int elm)
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
        nd->next=st;
        return nd;
    }
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
SLL * deleteVal(SLL *st,int elm)
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
           if(q->val==elm)
           {
                printf("\nDeleted Element is: %d",elm);
                free(q);
                return NULL;
           }
           else
            {
                printf("\nValue not Found:(404->just kidding):%d",elm);
                return st;
            }
        }
        else
        {
            while(q !=NULL && q->val!=elm)
            {
                p=q;
                q=q->next;
            }
            if(q==NULL)
            {
                printf("\nValue not Found:(404->just kidding):%d",elm);
                return st;
            }
            else
            {
                p->next=q->next;
                printf("\nDeleted Element is: %d",elm);
                free(q);
                return st;
            }
        }
    }//main else close
}
void display(SLL *st)
{
    SLL *q=st;
    if(q->next==NULL)
    {
        printf("%d ",q->val);
        return;
    }
    printf("%d ",q->val);
    display(q->next);
}
int main()
{
    SLL  *start=NULL;
    int ch,val;
    while(1)
    {
        printf("\nEnter a Your Choice:\n1.insertBeg  2.insertEnd  3.deletBeg\n4.deleteEnd  5.Delete Value  6.Display(ASC)\n7.Exit\n==>>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter a (for Begning)Value:");
                    scanf("%d",&val);
                    start=insertBeg(start,val);
                    break;
            case 2:printf("\nEnter a (for End)Value:");
                    scanf("%d",&val);
                    start=insertEnd(start,val);
                    break;
            case 3:start=deleteBeg(start);
                    break;
            case 4:start=deleteEnd(start);
                    break;
            case 5:printf("\nEnter a(for Delete) Value:");
                    scanf("%d",&val);
                    start=deleteVal(start,val);
                    break;
            case 6:printf("Elements Are:\n");
                    display(start);
                    break;
            case 7:exit(0);
            default:printf("\nInvalid Option selcted!!\nTry Again");
        }
    }
}
