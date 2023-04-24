
// scanf se input lene pe space ke baad waale nhi leta
// isiliye gets() use hota hai

#include<stdio.h>

int main()
{
    char st[30];
    printf("enter string:");
    gets(st);
    printf("------------INPUT IS TAKEN----------\n");
    puts(st);


    return 0;
}