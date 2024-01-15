#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100;
void reverse(char *);
int strlength(char *);
int main()
{
    char str[100],word[50]="",result[100]="";
    int i,j=0,l;
    printf("\nEnter a String:");
    gets(str);
    reverse(str);
    strcat(str," ");
    l=strlength(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
            str[j]='\0';
            reverse(word);
            strcat(result,word);
            strcat(result," ");
            j=0;
            // printf("%d",sizeof(word));
            memset(word,0,sizeof(word));
        }
        else
        {
            word[j]=str[i];
            j++;
        }
    }
    printf("After:\n%s",result);
    return 0;
}
int strlength(char *str)
{
    int l;
    for(l=0;str[l]!='\0';l++);
    return l;
}
void reverse(char *str)
{
    int l=0,i;
    char ch;
    for(l=0;str[l]!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        ch=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=ch;
    }

}