#include<stdio.h>
int main()
{
    int fyear,eyear,i;
    printf("Printing leap year:\nEnter from year to which year you want(like:2000 3000):");
    scanf("%d %d",&fyear,&eyear);
    for(i=fyear;i<=eyear;i++)
    {
        if(i%4==0&&i%100!=0||i%400==0)
            printf("%d ",i);
    }
    return 0;
}