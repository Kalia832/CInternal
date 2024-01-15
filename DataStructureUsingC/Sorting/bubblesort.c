#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter number of Elements in array: ");
    scanf("%d",&x);
    printf("\nEnter Elements of the array: ");
    int arr[x];
    for(i=0;i<=x-1;i++)
        scanf("%d",&arr[i]);
    bubbleSort(arr,x);
    for(i=0;i<=x-1;i++)
        printf("%d ",arr[i]);
    return 0;
}
bubbleSort(int array[],int n)
    {
        int i,j;
        for(i=n-2;i>=0;i--)
        {
            for(j=0;j<=i;j++)
            {
                if(array[j]>array[j+1])
                {
                    swap(array,j,j+1);
                }
                
            }
            if(j=0)
                break;
        }
            
    }
swap(int arr[],int x,int y)
    {
        arr[x]=arr[x]^arr[y];
        arr[y]=arr[x]^arr[y];
        arr[x]=arr[x]^arr[y];
    }