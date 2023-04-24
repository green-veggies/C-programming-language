#include<stdio.h>
int main()
{
    int arr[6];
    for(int j=0;j<=5;j++){
        printf("enter element number %d :",j+1);
        scanf("%d",&arr[j]);
    }
    for(int i=5;i>=0;i--)
    printf("%d\n",arr[i]);
    return 0;
}