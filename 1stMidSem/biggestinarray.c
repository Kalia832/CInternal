#include<stdio.h>
int main()
{
    int i,size,max,flag=0;
    printf("Enter size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d Elements of array:",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=1;i<size;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    for(i=0;i<size;i++)
    {
        if(max==arr[i])
            flag++;
    }
    printf("%d is the Max number and it has %d times.",max,flag);
    return 0;
}