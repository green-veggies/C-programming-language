#include<stdio.h>//swapping using 2 variables
int main()
{
    int a,b;
    printf("enter 2 num :");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped numbers are :%d %d",a,b);
    return 0;
}
