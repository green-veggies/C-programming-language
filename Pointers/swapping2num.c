#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp=*x;//*x = value in a which is now stored in temp
    *x=*y;//*y=b,,*x=*y -> *x=b
    *y=temp;//temp=a -> *y=a
    return;
}

int main()
{
    int a,b;
    printf("enter 2 numbers:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("new value of a:%d\n",a);
    printf("new value of b:%d\n",b);
    return 0;
}