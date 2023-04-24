
// Fibbonacci series

#include<stdio.h>
int main()
{
    int x=0,y=1,z,n;
    printf("Enter limit::");
    scanf("%d",&n);
    while(z<=n)
    {
        x=y;
        y=z;
        z=x+y;
        z++;
    }
   
    
    
    return 0;
}