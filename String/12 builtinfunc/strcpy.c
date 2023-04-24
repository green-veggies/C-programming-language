
// strcpy(s2,s1) -> copy content of string s1 to s2

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello world";
    char cpy[50];
    strcpy(cpy,str);
    int len=strlen(cpy);
    printf("%s\n%d",cpy,len);

    return 0;
}