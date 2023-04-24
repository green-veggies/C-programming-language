
// Average of any number using for loop

#include<stdio.h>
int main()
{
    float n,sum=0.0;
    float avg=0.0;
    printf("enter a number:");
    scanf("%d",&n); 
    for(int i=1;i<=n;i++){
        sum=sum+i;
        avg=sum/n;
    }
    printf("Average is %f",avg);
    return 0;
}