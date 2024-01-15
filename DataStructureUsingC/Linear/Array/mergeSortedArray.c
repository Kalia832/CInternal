#include<stdio.h>
#include<stdlib.h>

int * merge(int a[],int size1,int b[],int size2)
{
    int *c;
    int i,j,k;
    c=(int*)malloc((size1+size2)*sizeof(int));
    for(i=0,j=0,k=0;i<size1&&j<size2;k++)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    while(i<size1)
    {
        c[k++]=a[i++];
    }
    while(j<size2)
    {
        c[k++]=b[j++];
    }
    return c;
}
int main()
{
    int arr[4]={1,2,3,4},brr[6]={5,6,7,8,9,11},*crr,i;
    crr=merge(arr,4,brr,6);
    for(i=0;i<10;i++)
        printf("%d",crr[i]);
    return 0;
}