#include<stdio.h>
#include<stdlib.h>
#define size 10
void merge(int arr[],int f,int m,int l)
{
    int a[size];
    int i=f,j=m+1,k=f;//where i for the first array, j for the second array and k for the resulting array
    while(i<=m&&j<=l)
    {
        if(arr[i]<arr[j])
        {
            a[k++]=arr[i++];
        }
        else
        {
            a[k++]=arr[j++];
        }
    }
    while(i<=m)
    {
        a[k++]=arr[i++];
    }
    while(j<=l)
    {
        a[k++]=arr[j++];
    }
    for(i=f;i<=l;i++)
        arr[i]=a[i];
}

void mergSort(int arr[],int first,int last)//The Divider
{
    int mid=(first+last)/2;
    if(first<mid)
    {
        mergSort(arr,first,mid);
    }
    if((mid+1)<last)
    {
        mergSort(arr,(mid+1),last);
    }
    merge(arr,first,mid,last);
}
int main()
{
    int ch,arr[size]={10,30,90,50,34,25,11,39,23,55};
    int i;
    mergSort(arr,0,size-1);
    printf("\nAfter Merge Sort:");
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}