#include<stdio.h>
int main()
{
    int x=20,y=5,z;
    z=(x>y)?x++:++y;
    printf("x=%d  y=%d  z=%d",x,y,z);
    return 0;
}