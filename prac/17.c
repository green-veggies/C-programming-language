
// print fibonacci sereis with array

#include<stdio.h>
int main()
{
    int n;
    printf("enter limit:");
    scanf("%d",&n);
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<=n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}