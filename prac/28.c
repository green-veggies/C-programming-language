

#include<stdio.h>
int main()
{ 
    int n;
    printf("enter limit:");
    scanf("%d",&n);

    int arr[50];
    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    printf("fib series:");
    for(int i=0;i<=n;i++){
        printf("%d",arr[i]);
    } 
    return 0;
}