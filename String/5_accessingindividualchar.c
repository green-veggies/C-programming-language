
// we can also access/modify individual characters same as array


#include<stdio.h>

int main()
{
    char str[]="helloworld";
    printf("%c\n",str[5]);
    str[8]=69;
    // for(int i=0;str[i]!='\0';i++){
    //     printf("%c",str[i]);
    // }
    printf("%s",str); // we can use this to print string
    return 0;
}