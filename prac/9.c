// factorial

#include<stdio.h>
int main()
{
    int fact=1,n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%d is factorial of %d",fact,n);
    
    return 0;
}