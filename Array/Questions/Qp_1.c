// MARKS LESS THAN 35 PRINT ROLL NUMBER

#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0;i<=9;i++){
        printf("Enter marks of Student %d ::",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=9;i++){
        if(arr[i]<35){
            printf("Roll number is :: %d",i+1);
        }
        else{
        continue;
        }
        printf("\n");
    }
    return 0;
}