#include<stdio.h>
#include<windows.h>
#define size 4
int top=-1,arr[size];
void push();
void pop();
void isfull();
void isempty();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf("\nPerforming Stack Operation:\n");
        printf("1.Push\n2.Pop\n3.isfull\n4.isEmpty\n5.Desplay\n6.exit\nEnter Your Choice::>");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 4:isempty();
                    break;
            case 3:isfull();
                    break;
            case 5:display();//Shoud Not Use for Fun only i use here
                    break;
            case 6:exit(0);
                    break;
            default:printf("Invalid Option Selected,Try Again!!");
        }//swithc body close
        getch();
    }//while body close
    return 0;
}//main body close
void push()
{
    if(top==size-1)
    {
        printf("\nStack Overflow!!Can't Insert");
        return;
    }
    int num;
    printf("\nEnter a number to insert:");
    scanf("%d",&num);
    top++;
    arr[top]=num;
    printf("\n%d Sucessfully Inserted",num);
}
void pop()
{
    if(top==-1)
    {
        printf("\nstack is already Empty!!");
        return;
    }
    int temp=arr[top];
    arr[top]=0;
    top--;
    printf("\n%d is sucessfully Poped.",temp);
}
void isempty()
{
    if(top==-1)
        printf("\nYes,stack is empty");
    else 
    {
        printf("stack is not empty and the top Present at %d Postion",top);
        display();
    }
}
void isfull()
{
    if(top==size-1)
        printf("\nStack is Full");
    else 
    {
        printf("stack is not Full and the top Present at %d Postion",top);
        display();
    }
}
void display()
{
    if(top==-1)
    {
        printf("\nStack is Empty!!");
        return;
    }
    int i;
    for(i=size-1;i>=0;i--)
    {
        printf("\n%d||  %d  ||",i,arr[i]);
    }
}
