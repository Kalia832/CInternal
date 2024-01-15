//Selection Sort
//Check the Output without the second nested if condition
#include<stdio.h>
#define size 10
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int i,j,min,arr[size]={2,5,3,1,6,4,7,9,8,10};
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                if(arr[min]>arr[j])//try the output with out this condition
                    min=j;
            }
        }
        if(i!=min)
        {
            swap(&arr[i],&arr[min]);
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
