//THIS CANNOT RUN WITHOUT USING POINTERS
#include<stdio.h>//swapping using functions
void swap(int a,int b){
    int temp=a;
    b=a;
    b=temp;
    return;
}
int main()
{
    int a,b;
    printf("enter 2 num :");
    scanf("%d %d",&a,&b);
    swap(a,b);
    printf("%d\n",a);
    printf("%d",b);
    
    return 0;
}