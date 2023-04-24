
// In pointer string, we can modify whole string..but not individual characters 
// But in normal initialisation -> we can only modify individual characters...but not whole string 

#include<stdio.h>
int main()
{
    // char s[]="hello world";
    // printf("%s",s);
    //str="aditya"; // Error-> We can only modify individual characters...but not whole string 
   
    char *ptr="Aditya";
    printf("%s\n",ptr);
    ptr="Jasrotia";
    puts(ptr);
     
    return 0;
}