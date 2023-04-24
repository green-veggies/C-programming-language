/*#include<stdio.h>//this code will not work without math.h
#include<math.h>
int main()
{
    int a;
    printf("enter a number ;");
    scanf("%d",&a);
    float b=sqrt(a);//sqrt in-built func works with math.h
    printf("the root of %d is %f",a,b);
    return 0;
}*/
#include<stdio.h>//this code will not work without math.h
#include<math.h>
int main()
{
    int a,b;
    printf("enter a number ;");
    scanf("%d",&a);
    printf("enter power ;");
    scanf("%d",&b);
    int q=pow(a,b);//power(a,b) in-built func works with math.h
    printf("%d to the power %d is %d",a,b,q);
    return 0;
}
