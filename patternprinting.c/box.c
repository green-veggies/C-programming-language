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

/*#include<stdio.h>
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
}*/

/*#include<stdio.h>
int main()
// RECTANGLE star pattern => NUM OF ROWS = n ,,,NUM OF COLUMNS = N
{
    int n,N;
    printf("enter number of rows :");
    scanf("%d",&n);
    printf("enter number of columns :");
    scanf("%d",&N);
    for(int i = 1 ;i<=n;i++){
        for(int i = 1 ;i<=N;i++){
            printf("*");
        }
        printf("\n");//break line after one nested loop
    } 
    return 0;
}*/
#include<stdio.h>
int main()
// RECTANGLE star pattern => NUM OF ROWS = n ,,,NUM OF COLUMNS = N
{
    int n,N;
    printf("enter number of rows :");
    scanf("%d",&n);
    printf("enter number of columns :");
    scanf("%d",&N);
    for(int i = 1 ;i<=n;i++){
        for(int i = 1 ;i<=N;i++){
            printf("%d",i);
        }
        printf("\n");//break line after one nested loop
    } 
    return 0;
}

