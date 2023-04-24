/*#include<stdio.h>
void hi(){
    printf("good MORNING \n");
    printf("HELLO HOW ARE YOU\n");
    printf("BYEE\n");
    printf("\n \n \n");
    return;
}
int main() // starts from main()
{
    hi();//goes back to hi() function
    hi();
    hi();
    return 0;
}*/
#include<stdio.h>
void england(){
    printf("YOU ARE IN ENGLAND \n");// 7
    return;
}
void australia(){
    printf("YOU ARE IN AUSTRALIA\n");//5
    england();// 6 goes to func england()
    return;
}
void india(){
    printf("YOU ARE IN INDIA\n");//3
    australia();// 4 goes to func australia() 
    return;
}
int main()// 1 code starts from  here
{
    india();// 2 goes to func india()
    return 0;
}