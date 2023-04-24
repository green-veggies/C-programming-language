
// print all numbers and alphabets

#include<stdio.h>
int main()
{
    int n;
    for(n=65;n<=90;n++) printf("%c\n",n);//CAPITAL LETTERS
    for(n=97;n<=122;n++) printf("%c\n",n);// SMALL LETTERS
    for(n=48;n<=57;n++) printf("%c",n);// NUMBERS
    return 0;
}