#include<stdio.h>
int main()
{
    int num,i,sel;
    printf("Converting Decimal to Binary or Octal:\nEnter your Choice:\n1.Decimal to Binary\n2.Decimal to Octal:\n::===>>");
    scanf("%d",&sel);
    if(sel==1)
    {
        printf("\nEnter a Number to Convert into Binary:");
        scanf("%d",&num);
        while(num)
        {
            printf("%d ",(num%2));
            num/=2;
        }
        printf("\n''Please read the answer from right to left:Thanks''");
    }
    else if(sel==2)
    {
        printf("\nEnter a Number to Convert into Octal:");
        scanf("%d",&num);
        while(num)
        {
            printf("%d ",(num%8));
            num/=8;
        }
        printf("\n''Please read the answer from right to left:Thanks''");
    }
    else
        printf("Invalid Option Selected");
    return 0;
}