// use (n+1)/2 for centre row and column
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==(n+1)/2||j==(n+1)/2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
     
    
    return 0;
}