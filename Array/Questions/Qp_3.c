// SUM OF ELEMENTS OF ARRAY

#include<stdio.h>
int main()
{
    int sum=0;
    int arr[5]={10,5,87,63,19};
    for (int i=0;i<=4;i++){
        sum=arr[i]+sum;     
    }
    printf("%d",sum);
    return 0;
}