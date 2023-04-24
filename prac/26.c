

#include<stdio.h>
int main()
{
    int x;
    printf("enter rows:");
    scanf("%d",&x);

    for(int i=1;i<=x;i++){
        for(int k=1;k<=x-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=1;k<=i-1;k++){
            printf("%d",k);
        }
        
        printf("\n");
    }
    return 0;
}