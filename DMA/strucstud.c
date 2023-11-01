#include<stdio.h>
#include<conio.h>
typedef struct STUD
{
    int roll;
    char name[50];
    float cgpa;
}STUD;

int main()
{
    int size;
    char temp[50];
    printf("Enter No of Students:");
    scanf("%d",&size);
    STUD sarr[size];
    int i;
    for(i=0;i<size;i++)
    {
        printf("\nEnter Name for %d Student:",(i+1));
        fflush(stdin);//**must for string handling
        gets(sarr[i].name);
        printf("\nEnter Roll for %d Student:",(i+1));
        scanf("%d",&sarr[i].roll);
        printf("\nEnter CGPA for %d Student:",(i+1));
        scanf("%f",&sarr[i].cgpa);
    }
    printf("RollNO       Name        CGPA\n===================================");
    for(i=0;i<size;i++)
    {
        printf("\n%d\t%s\t%f",sarr[i].roll,sarr[i].name,sarr[i].cgpa);
    }
    return 0;
}