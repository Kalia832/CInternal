#include<stdio.h>
int main()
{
    int arr[2][2],brr[2][2],crr[2][2],i,j;
    printf("Enter 4 Elements of first 2x2 matrix:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }//for first matrix input
    printf("Enter 4 Elements of second 2x2 matrix:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }//for second matrix input
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            //scanf("%d",&arr[i][j]);
            crr[i][j]=(arr[i][j]*brr[i][j])+(arr[i][j+1]*brr[i+1][j]);
        }
    }//for making sum
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d  ",arr[i][j]);
        }
        printf("|");
        for(j=0;j<2;j++)
        {
            printf(" %d  ",brr[i][j]);
        }
        printf("|");
        for(j=0;j<2;j++)
        {
            printf(" %d  ",crr[i][j]);
        }
        printf("|");
        printf("\n");
    }
    return 0;
}