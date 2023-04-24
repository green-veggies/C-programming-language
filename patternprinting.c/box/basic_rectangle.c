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
// RECTANGLE pattern => prints 12345....upto n in columns and m rows 
{
    int n,m;
    printf("enter number of rows :");
    scanf("%d",&n);
    printf("enter number of columns :");
    scanf("%d",&m);
    for(int i = 1 ;i<=n;i++){
        for(int i = 1 ;i<=m;i++){
            printf("%d ",i);
        }
        printf("\n");//break line after one nested loop
    } 
    return 0;
}