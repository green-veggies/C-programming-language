
// ADDITION OF MAIN DIAGONAL OF MATRIX

// #include<stdio.h>
// int main()
// {
//     int i,j,sum=0;
//     int arr[3][3]={1,98,6,8,8,658,598,7,19};
//     for(i=0;i<=2;i++){
//         for(j=0;j<=2;j++){
//             if(i==j){
//                 sum=sum + arr[i][j];
//             }
//         }
//     }
//     printf("sum = %d",sum);
    
    
//     return 0;
// }

#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("%d %d",a,b);
    
    
    return 0;
}