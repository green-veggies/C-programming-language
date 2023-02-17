/*#include<stdio.h>
int main()
{
    int a=5;
    int b=5;
    printf("%p %p",&a,&b);//%p prints address
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a=10;
    int* x=&a;//x stores address of a
    printf("%p\n",x);
    printf("%p\n",&x);//x has its own address also,,this prints address of x
    printf("%d",*x);// *x is pointing to the value whose address is stored in x
    return 0;
}