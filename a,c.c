/*#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter number ",a);
    scanf("%d",&a);
    printf("enter number ",b);
    scanf("%d",&b);
    c=a,a=b,b=c;
    printf("swapped number is ;%d\n%d",a,b);

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    for(int i=1;i<=100;i=i+1)
    {
        printf("%d\n",i);
    }
    
    return 0;
}*/
#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("ENTER MARKS");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    printf("AVERAGE ;%f",(a+b+c+d+e)/5);

    return 0;
}