
// Reversing a string

#include<stdio.h>

int main()
{
    char abc[50];
    puts("Enter a string:"); // we can also use puts instead of printf
    gets(abc);

    // size
    int size=0;
    for(int i=0;abc[i]!='\0';i++){
        size++;
    }
    printf("size of string is %d\n",size);

    //reversing
    puts("the reverse is");
    int i,j;
    for(i=0,j=size-1;i<=j;i++,j--){
        char temp=abc[i];
        abc[i]=abc[j];
        abc[j]=temp;
    }
    puts(abc);
    return 0;
}