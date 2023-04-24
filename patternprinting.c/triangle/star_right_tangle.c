// STAR RIGHT TRIANGLE 
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i = 1 ;i<=n;i++){
        for(int j = 1 ;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    } 
    return 0;
}

// STAR INVERTED RIGHT TRIANGLE 
/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i = 1 ;i<=n;i++){
        for(int j = n ;j>=i;j--){ // j starts from n and goes till i and value of j is j--
            printf("* ");
        }
        printf("\n");
    } 
    return 0;
}*/


//         ANOTHER METHOD
 

/*#include<stdio.h>
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    for(int i = 1 ;i<=n;i++){
        for(int j=1 ;j<=n+1-i;j++){ // j<=n+1-i
            printf("* ");
        }
        printf("\n");
    } 
    return 0;
}*/

 


