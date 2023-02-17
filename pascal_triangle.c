/*#include<stdio.h>
int factorial(x){
    int fact=1;
    for(int i = 2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main()
{
    int n;
    printf("ENTER N :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j = 0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }

    return 0;
}*/

//repeat

/*#include<stdio.h>
int factorial(x)
{
    int fact=1;
    for (int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main()
{
    int n;
    printf("Enter number of lines :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int q = combination(i,j);
            printf("%d ",q);
        }
        printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int factorial(x)
{
    int fact=1;
    for (int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main()
{
    int n,j;
    printf("Enter number of lines :");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        for( j=0;j<=n-i;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            int q= combination(i,j);
            printf("%d ",q);   
        }
        printf("\n");
    }
    return 0;
}