#include<stdio.h>
int main()
{
    int a=65;
    int* x=&a;//int* stores address of int

    int** y=&x;//int** stores address of int*/pointer
    int*** z=&y;// int*** stores address of int** -> &y 
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%d\n",***z);
    

    return 0;
}