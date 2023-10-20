#include<stdio.h>
#include<string.h>

int main()
{
    char arr[50];
    int flag=0,i;
    printf("Enter a sentensce:");
    gets(arr);
    for(i=0;i<50;i++)
    {
        if(arr[i]==32)
            flag++;
    }

    printf("number of words %d ",(flag+1));
    return 0;
}