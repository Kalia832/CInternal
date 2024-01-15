//GENERAL FUNCTIONS RELATED TO LINKED LIST
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
            while(q->val!=elm)
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
SLL * insertionSort(SLL *st,int elm)
{
    SLL *nd=createNode(),*q=st,*p;
    nd->val=elm;
    if(q==NULL)
    {
        return nd;
    }
    else
    {
        if(q->val>elm)
        {
            nd->next=q;
            return nd;
        }
        else
        {
            while(q->val<elm)
            {
                p=q;
                q=q->next;
                if(q==NULL)
                    break;
            }
            // if(q==NULL)
            // {
            //     p->next=nd;
            //     return st;
            // }
            p->next=nd;
            nd->next=q;
            return st;
        }
    }
}
SLL * linkedsort(SLL *st)
{
    SLL *newst=NULL,*q=st;
    if(q==NULL)
    {
        printf("List is empty");
        return NULL;
    }
    while(q->next!=NULL)
    {
        newst=insertionSort(newst,q->val);
        q=q->next;
    }
    newst=insertionSort(newst,q->val);
    return newst;
}
void display(SLL *st)
{
    SLL *q=st;
    if(q==NULL)
    {
        printf("list is Empty:");
        return;
    }
    while(q->next!=NULL)
    {
        printf("%d ",q->val);
        q=q->next;
    }
    printf("%d",q->val);
}
int main()
{
    SLL  *start=NULL;
    int ch,val;
    while(1)
    {
        printf("\nEnter a Your Choice:\n1.insertBeg  2.insertEnd  3.deletBeg\n4.deleteEnd  5.Delete Value  6.Insertion Sort\n7.Display(ASC)  8.Exit\n==>>");
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
            case 6:start=linkedsort(start);
                    printf("\nEnter a Value(to insert in its right position):");
                    scanf("%d",&val);
                    start=insertionSort(start,val);
                    break;
            case 7:printf("Elements Are:\n");
                    display(start);
                    break;
            case 8:exit(0);
            default:printf("\nInvalid Option selcted!!\nTry Again");
        }
    }
}
