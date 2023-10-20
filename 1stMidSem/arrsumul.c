#include<stdio.h>
int main()
{
    int n,i,sum=0,mul=1;
    printf("Enter Size of the Array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d number Elements for array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
            continue;
        else if(arr[i]%2==0)
            sum+=arr[i];
        else
            mul*=arr[i];
    }
    printf("Sum of all Even Numbers is: %d",sum);
    printf("\nMultiplication of all Odd Numbers is: %d",mul);
    return 0;
}