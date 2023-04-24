
#include<stdio.h>

int main()
{
    int size=0;
    char str[]="helloworld"; //string size 10 hona chahiye lekin 11 hoga kyoki \0 bhi hai 
    for(int i=0;str[i]!='\0';i++){
        size++; 
        printf("%c",str[i]);
    }
    printf("\nsize of string is::%d",size);
}