#include<stdio.h>
#define size 10
int binarySearch(int arr[],int left,int right,int target)
{
    int mid=(left+right)/2;
    if(left>right)
        return -1;
    else if(arr[mid]==target)
        return mid;
    else if(arr[mid]>target)
        return (binarySearch(arr,left,mid-1,target));
    else
        return (binarySearch(arr,mid+1,right,target));
}
int main()
{
    int ch;
    int arr[size]={1,2,3,4,5,6,7,8,9,10};
    printf("\nEnter a number to search(1-10):");
    scanf("%d",&ch);
    printf("search Element found at: %d",binarySearch(arr,0,9,ch));
    return 0;
}