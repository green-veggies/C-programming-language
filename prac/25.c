
// searching in 2d string

#include<stdio.h>
int main()
{
    char x;
    printf("enter a character you want to search");
    scanf("%c",&x);
    char s1[5][5];
    puts("enter string:");
    gets(s1);
    for(int i=0,j=0;s1[i][j]!='\0';i++,j++){
        if(s1[i][j]==x) {
            x==s1[i][j];
            break;
        }
    }
    printf("number found");


 
    return 0;
}