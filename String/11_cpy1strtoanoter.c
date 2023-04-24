
// SHALLOW COPY -> here s2 points to same string and change is str also reflects in s2
// It basically modifies the string,,and original string is changed

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[]="hello world";
//     char* s2=str;
//     str[5]='X';
//     printf("%s",s2 );

//     return 0;
// }


// DEEP COPY -> It creates a new copy of string and all changes and done there and original copy is saved as it is

#include<stdio.h>
#include<string.h>
int main()
{
    int size=0;
    char str[]="hello world";
    for(int i=0;str[i]!='\0';i++){
        size++;
    }
    printf("%d",size);
    char s[size];
    for(int i=0;i<=size-1;i++){
    //    printf("%",str[i]);
    }
 
    return 0;
}