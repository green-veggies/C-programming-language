
// print rectangle with star on boundaries and space in between

#include<stdio.h>
int main()
{
    int x,y,i,j;
    printf("Enter row:");
    scanf("%d",&x);
    printf("Enter column:");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
        for(j=1;j<=x;j++){
            if (i==1||j==1){
                printf("*");
            }
            else if (j==x || i==y){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}