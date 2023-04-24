
// strlen(name of function) is used to find length of string

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello world";
    int x=strlen(str);
    printf("Length of %d",x);

    return 0;
}