#include<stdio.h>
#include<stdlib.h>
#define MAX 5

typedef struct que//que is the tag name
{
    int item[MAX];
    int front,rear,count;
}intQue;

intQue* initQue()
{
    intQue *q;
    q=(intQue*)calloc(sizeof(intQue),1);
    q->front=0;
    q->rear=-1;
    q->count=0;
    return q;
}

int isEmpty(intQue *q)
{
    return (q->count==0);
}

int isFull(intQue *q)
{
    return (q->count==MAX);
}

void insert(intQue *q,int elm)
{
    q->rear=(q->rear+1)%MAX;
    q->item[q->rear]=elm;
    q->count++;
}
int delet(intQue *q)
{
    int elm;
    elm=q->item[q->front];
    q->item[q->front]=0;
    q->front=(q->front+1)%MAX;
    q->count--;
    return elm;
}
void print(intQue *q)
{
    int i;
    printf("\n");
    for(i=0;i<MAX;i++)
    {
        printf("%d  ",q->item[i]);
    }
}
int main()
{
    int ch,elm;
    intQue *q1=initQue();
    while(1)
    {
        printf("\nEnter your choice:\n1.Insert\n2.Delete\n3.exit\n==>>");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(isFull(q1))
                    {
                        printf("Queue over flow Error!!");
                        break;
                    }
                    printf("Enter a value:");
                    scanf("%d",&elm);
                    insert(q1,elm);
                    break;
            case 2:if(isEmpty(q1))
                    {
                        printf("Queue Under Flow");
                        break;
                    }
                    elm=delet(q1);
                    printf("\nPoped Element:%d  \n",elm);
                    break;
            case 3:exit(0);
            default:printf("Invalid option");
        }
         print(q1);
    }
}
