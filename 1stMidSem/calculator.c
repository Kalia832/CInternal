#include<stdio.h>
//function declarations 
void add(int,int);void sub(int,int);void mul(int,int);void div(int,int);
int main()
{
    int x,y,select;
    printf("Select your choice \n1.Addition\n2.Substration\n3.Multiplication\n4.Division\n::==>>");
    scanf("%d",&select);
    printf("Enter Two numbers:==>>");
    scanf("%d %d",&x,&y);
    switch(select)
    {
        case 1:add(x,y);
                break;
        case 2:sub(x,y);
                break;
        case 3:mul(x,y);
                break;
        case 4:div(x,y);
                break;
        default:printf("Invalid options selected");
    }
    return 0;
}
void add(int a,int b)
{
    printf("Sum of %d and %d is %d",a,b,(a+b));
}
void sub(int a,int b)
{
    printf("Substration of %d and %d is %d",a,b,(a-b));
}
void mul(int a,int b)
{
    printf("Multiplication of %d and %d is %d",a,b,(a*b));
}
void div(int a,int b)
{
    printf("Division of %d and %d is %f",a,b,(a/b+0.00));
}