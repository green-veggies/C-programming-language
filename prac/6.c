// sum of digits given number

#include<stdio.h>
int main()
{
    int a,sum=0,b;
    puts("enter n:");
    scanf("%d",&a);
    while (a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("Sum is %d",sum);   
    return 0;
}