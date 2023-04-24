

#include<stdio.h>
int main()
{
    float pow,ans=1;
    printf("enter power:");
    scanf("%f",&pow);
    int acc=10;
    float temp=1;
    for(int i=1;i<=acc;i++){
        temp=(temp*pow)/i;
        ans=ans+temp;
    }
    printf(" answer is %f",ans);
}