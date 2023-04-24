#include<stdio.h>
int min(int a,int b){
    if(a<b)
        return a;
    else if(b>a)
        return b;
    else
        return 0;
}
int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;

}
int main()
{
    int a,b,q;
    printf("enter 2 numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    q = gcd(a,b);
    printf("GCD Of TWO NUMBERS IS %d",q);
    return 0;
} 