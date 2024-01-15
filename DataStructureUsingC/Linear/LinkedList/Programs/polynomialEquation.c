#include<stdio.h>
#include<stdlib.h>

typedef struct poly
{
    int coff,expo;
    struct poly *next;
}POLY;

POLY * createNode()
{
    POLY *nd;
    nd=(POLY*)malloc(sizeof(POLY));
    nd->next=NULL;
    return nd;
}

POLY * createPoly()
{
    POLY *st=NULL,*nd,*q;
    int degree,coff,i;

    printf("\nEnter The Highest Degree of the Equation:");
    scanf("%d",&degree);
    for(i=degree;i>=0;i--)
    {
        printf("\nEnter the Cofficient for %dth Expo:",i);
        scanf("%d",&coff);
        if(coff!=0)
        {
            nd=createNode();
            nd->coff=coff;
            nd->expo=i;
            if(st==NULL)
            {
                st=nd;
            }
            else
            {
                q=st;
                while(q->next!=NULL)
                {
                    q=q->next;
                }
                q->next=nd;
            }
        }//if close
    }//for close
    return st;
}
void printPoly(POLY *st)
{
    POLY *q=st;
    if(q==NULL)
    {
        printf("Polynomial is Empty:");
        return;
    }
    while(q->next!=NULL)
    {
        printf("%d^%d +",q->coff,q->expo);
        q=q->next;
    }
    printf("%d^%d ",q->coff,q->expo);
}
int main()
{
    POLY *p1=createPoly();
    printPoly(p1);
    return 0;
}