
// fibonacci series using recursion

#include<stdio.h>

int fibo(int i)
{

    if (i<2) return i;
    else{
        return fibo(i-1)+fibo(i-2);
    }   
}

int main()
{
    int a;
    int x=0,y=1;
    printf("Enter a number:");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        printf("%d,",fibo(i));
    } 
    return 0;
}