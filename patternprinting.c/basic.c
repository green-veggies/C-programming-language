/*#include<stdio.h>//without using for loop
int main()
{
    printf("*\n**\n***\n****\n");

    return 0;
}*/
#include<stdio.h>
int main()
// upto n number n stars
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i = 1 ;i<=n;i++)
        printf("*");
    return 0;
}