
// Write a function to insert a new character in a string at given position

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50]="hello world";
    puts(str);
    // 9th index pe 'D' insert
    for(int i=10;i>=9;i--){
        str[i+1]=str[i];
    }
    str[9]='D';
    puts(str);
    return 0;
}