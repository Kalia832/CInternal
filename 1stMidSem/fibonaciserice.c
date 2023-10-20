#include<stdio.h>
int main()
{
    int len,i,sum=0,first=0,sec=1;
    printf("Generating Fibonaci Serice:\nEnter the Length of the serice:");
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
        sum=first+sec;
        first=sec;
        sec=sum;
        printf("%d ",sum);
    }
    return 0;
}