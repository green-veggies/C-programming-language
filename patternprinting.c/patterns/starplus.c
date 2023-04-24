// BASIC STAR TRIANGLE

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter n;");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("*");}
        printf("\n");
    }
    
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n=5;
    // printf("enter n;");
    // scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==3||j==3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }
    return 0;
}*/

// REPEAT

#include<stdio.h>
int main()
{
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==3||j==3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
     
    
    return 0;
}

