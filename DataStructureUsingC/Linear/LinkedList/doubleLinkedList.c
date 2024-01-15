//Doubly linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct dll
{
    int val;
    struct dll *next,*pre;
}DLL;

DLL * createNode()
{
    DLL *nd;
    nd=(DLL*)malloc(sizeof(DLL));
    nd->next=NULL;
    nd->pre=NULL;
    return nd;
}

DLL * insertBeg(DLL *st,int elm)
{
    DLL *nd=createNode();
    nd->val=elm;
    if(st==NULL)
    {
        return nd;
    }
    else
    {
        nd->next=st;
        st->pre=nd;
        return nd;
    }
}
DLL * insertEnd(DLL *st,int elm)
{
    DLL *nd=createNode(),*q=st;
    nd->val=elm;
    if(st==NULL)
    {
        return nd;
    }
    else
    {
        if(q->next==NULL)
        {
            q->next=nd;
            nd->pre=q;
            return st;
        }
        else
        {
            while(q->next!=NULL)
            {
                q=q->next;
            }
            q->next=nd;
            nd->pre=q;
            return st;
        }
    }
}
DLL * deleteBeg(DLL *st)
{
    DLL *q=st;
    if(q==NULL)
    {
        printf("\nList is Empty!!");
        return NULL;
    }
    else if(q->next==NULL)
    {
        printf("\nDeleted Node:%d",q->val);
        free(q);
        return NULL;
    }
    else
    {
        st=st->next;
        st->pre=NULL;
        printf("\nDeleted Node:%d",q->val);
        free(q);
        return st;
    }
}
DLL * deleteEnd(DLL *st)
{
    DLL *q=st,*p=NULL;
    if(q==NULL)
    {
        printf("\nList is Empty!!");
        return NULL;
    }
    else if(q->next==NULL)
    {
        printf("\nDeleted Node:%d",q->val);
        free(q);
        return NULL;
    }
    else
    {
        while(q->next!=NULL)
        {
            p=q;
            q=q->next;
        }
        printf("\nDeleted Node:%d",q->val);
        free(q);
        p->next=NULL;
        return st;
    }
}
DLL * deleteVal(DLL *st,int elm)
{
    DLL *q=st,*p;
    if(q==NULL)
    {
        printf("\nList is Empty!!");
        return NULL;
    }
    else if(q->next==NULL)
    {
        if(q->val==elm)
        {
            printf("\nDeleted Node:%d",q->val);
            free(q);
            return NULL;
        }
        else
        {
            printf("\nValue not Found in the list!!");
            return st;
        }
    }
    else
    {
        while(q!=NULL&&q->val!=elm)
        {
            p=q;
            q=q->next;
        }
        if(q==NULL)
        {
            printf("\nValue not Found in the list!!");
            return st;
        }
        else
        {
            printf("\nDeleted Node:%d",q->val);
            p->next=q->next;
            free(q);
            return st;
        }
        
    }
}
void display(DLL *st)
{
    if(st==NULL)
    {
        printf("\nList is Empty!!");
        return;
    }
    DLL *q=st;
    while(q!=NULL)
    {
        printf("%d ",q->val);
        q=q->next;
    }
}
void revDisplay(DLL *st)
{
    if(st==NULL)
    {
        printf("\nList is Empty!!");
        return;
    }
    DLL *q=st;
    while(q->next!=NULL)q=q->next;
    while(q!=NULL)
    {
        printf("%d ",q->val);
        q=q->pre;
    }
}
int main()
{
    DLL *start=NULL;//IF WE DON'T INTIALIZE THE POINTER WITH NULL THEN IT IS KNOW AS WILD POINTER
    int ch,elm;
    while(1)
    {
        printf("\nEnter Your choice:\n1.insert Begenin\n2.insert End\n3.Delete Begening\n4.Delete End\n5.Delete By Value\n6.Display\n7.RevDisplay\n8.Exit\n==>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter a Number:");
                    scanf("%d",&elm);
                    start=insertBeg(start,elm);
                    break;
            case 2:printf("\nEnter a Number:");
                    scanf("%d",&elm);
                    start=insertEnd(start,elm);
                    break;
            case 3:start=deleteBeg(start);
                    break;
            case 4:start=deleteEnd(start);
                    break;
            case 5:printf("\nEnter a Number:");
                    scanf("%d",&elm);
                    start=deleteVal(start,elm);
                    break;
            case 6:display(start);
                    break;
            case 7:revDisplay(start);
                    break;
            case 8:exit(0);
            default:printf("\nInvalid Option Selected!!");
        }
    }
    return 0;
}