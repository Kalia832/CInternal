#include<stdio.h>
int main()
{
    int num;
    printf("Checking Divisible by 3 or not\nEnter a Number:");
    scanf("%d",&num);
    if(num%3==0)
        printf("%d is divisible 3",num);
    else 
        printf("%d is not divisible by 3",num);
    return 0;
}