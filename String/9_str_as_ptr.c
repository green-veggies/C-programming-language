
// kisi bhi  string,array,character array ka address ske 0th element ke address ke equal hota hai 

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Bhubaneswar";
    char* ptr=str; // ptr now points to str[0]
    printf("%p\n",&str[0]);
    printf("%p\n",&str[3]);// hrr element string mein +1 address se bdta hai
    printf("%p\n",str); // iska aur str[0] ka address same hoga

    return 0;
}
