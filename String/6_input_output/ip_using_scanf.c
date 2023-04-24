
// We can take input from user by scan("%S",str);
// but problem is that it will not take input after space

#include<stdio.h>

int main()
{
    char str[50];
    printf("Enter string:"); 
    scanf("%s",str);
    //printf("entered string is %s",str);
    puts(str);
    return 0;
}