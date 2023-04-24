// do while (syntax)

// do
// {
//     //code
// } while (condition);

#include<stdio.h>
int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=a);
    return 0;
}
