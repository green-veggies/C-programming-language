// A
// AB
// ABC
// ABCD....
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ 
        for(int j=65;j<i+65;j++){
            printf("%c ",j);
            
        }
        printf("\n");
    }

    return 0;
}