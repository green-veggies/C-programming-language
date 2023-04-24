// conditional statement

//(condition)?if true do this:else this;

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    (a>b)?printf("a is greater"):printf("b is greater");
    return 0;
}