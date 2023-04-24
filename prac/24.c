

#include<stdio.h>
int main()
{
    char s[100];
    puts("enter string");
    gets(s);
    s[0]=s[0]-32;
    for(int i=0;s[i]!='\0';i++){
        if (s[i]==' '){
            s[i+1]=s[i+1]-32;
        }
    }
    printf("%s",s);
    return 0;
}