#include<stdio.h>
#define size 10
int main()
{
    int num,tnum,arr[size],i=0,revnum=0,l=0;

    printf("\nEnter a Number:");
    scanf("%d",&num);
    tnum=num;
    while(tnum)
    {
        arr[i++]=tnum%10;
        tnum/=10;
    }
    while(l<i)
    {
        revnum=revnum*10+arr[l++];
    }
    if(num==revnum)
        printf("\n%d is An Pallindrom number:",revnum);
    else
        printf("\n%d is not An Pallindrom number:",revnum);
    return 0;
}