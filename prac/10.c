// prime or not

#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if (n%i!=0){
        printf("PRIME");
        break;
        }
        else 
        printf("Not prime");
    }
    return 0;
}