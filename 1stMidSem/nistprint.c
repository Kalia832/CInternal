#include<stdio.h>
int main()
{
    char arr[4]={'N','I','S','T'};
    int i,j,k,num;
    printf("Enter Number of line:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(j=0,k=0;j<=i;j++,k++)
        {
            printf("%c ",arr[k]);
            if(k==3)
                k=-1;
        }
        printf("\n");
    }
    return 0;
}