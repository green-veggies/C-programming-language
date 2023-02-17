#include<stdio.h>
int main()
{
    int a=100;
    int* x=&a;
    *x=69;// value of a is changed from 100 to 69
    printf("%d\n",a);

    return 0;
}