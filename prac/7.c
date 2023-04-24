// Armstrong number

#include<stdio.h>
int main()
{
    int a,b,sum=0,rem;
    puts("enter n:");
    scanf("%d",&a);
    b=a;
    while(a>0){
        rem=a%10;
        sum=sum+(rem*rem*rem);
        a=a/10;
    }
    if (b==sum){
        printf("%d is Armstrong",b);
    }
    else if (b!=sum)
    printf("No armstrong number");
    return 0;
}