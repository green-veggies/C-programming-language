/*
#include<stdio.h>
int main()
{
   int n;
   printf("enter a number :");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
        int a=1;
        for(int j;j<=n;j++){
            int d=a+64;
            char ch=(char)d;
            printf("%c ",ch);
            a++;
        }
        printf("\n");
   }
   return 0;
}*/


//  EASY METHOD
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=65;j<n+65;j++){
            printf("%c ",j);
        }
        printf("\n");
    }

    return 0;
}