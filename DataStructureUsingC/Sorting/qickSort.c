#include<stdio.h>
int main()
    {
        int a[]={23,2,53,56,5,67,69,71,8,91},i;
        quick_sort(a,10);
        for(i=0;i<10;i++)
            printf("%d ",a[i]);
        return 0;
    }
quick_sort(int a[],int n)
    {
        
    }
partition(int a[],int l,int h)
    {int pivot=a[l],i=l,j=h;
        while(i<j)
        {
            while(a[i]<=pivot)i++;
            while(a[j]>pivot)j--;
            if(i<j)
                swap(a,i,j);
        }
        swap(a,j,l);
    }
swap(int a[],int l,int h)
    {
        a[l]=a[l]^a[h];
        a[h]=a[l]^a[h];
        a[l]=a[l]^a[h];
    }