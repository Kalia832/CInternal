#include<stdio.h>
//function declarations;
int chkprime(int);

int main()
{
    int num,flag;
    printf("Checking Prime or not:\nEnter a Number:");
    scanf("%d",&num);
    flag=chkprime(num);
    if(flag)
        {printf("%d is a prime number",num);}
    else
        {printf("%d is a not a prime number",num);}
    return 0;
}
//function Definations
int chkprime(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
            break;
    }
    if(i==num)
        return 1;
    else
        return 0;
}