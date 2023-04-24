// THIS CODE DO NOT PRINT RECTANGLE BECAUSE ISME \n USE NHI KIYA HAI TO LINE BREAK NHI HO RHI
/*#include<stdio.h>
int main()
 // upto n stars using nested loops
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i = 1 ;i<=n;i++){
        for(int i = 1 ;i<=n;i++){      //double fpr loop => one for rows one for column
            printf("*");
        }
    } 
    return 0;
}*/

#include<stdio.h>
int main()
// SQUARE star pattern => NUM OF ROWS = NUM OF COLUMNS = N
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i = 1 ;i<=n;i++){
        for(int i = 1 ;i<=n;i++){
            printf("*");
        }
        printf("\n");//break line after one nested loop
    } 
    return 0;
}


#include<stdio.h>
int main()
// SQUARE PATTERN to print 1234.. in rows taken from user 
{
    int n;
    printf("enter number of rows and column :");
    scanf("%d",&n);
    for(int i = 1 ;i<=n;i++){
        for(int i = 1 ;i<=n;i++){
            printf("%d",i);
        }
        printf("\n");//breaks the line after one nested loop
    } 
    return 0;
}

