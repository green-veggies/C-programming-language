
// strcat(s1,s2) -> it joins/connects two strings
// direct run krne pe error aayega kyoki humne size define nhi kiya hai to system ne automatically size de diya...jb baad mein size change hua to error aayega
// isme phele se size extra rkhna pdega


#include<stdio.h>
#include<string.h>
int main()
{
    char str[50]="hello world";
    char s2[]="this is Aditya";
    strcat(str,s2);
    printf("%s",str);

    return 0;
}