
// fact of number using recursion

#include<stdio.h>

int fact(int x)
{
    int f=1;
    if (x==1)
    return 1;
    else{
        f=x*(fact(x-1));
    return f;
    }
}



int main()
{
    int a;
    printf("enter number::");
    scanf("%d",&a);
    fact(a);
    printf("Factorial = %d",fact(a));

    return 0;
}