
// printing array in ascending and descending order

#include<stdio.h>
int main()
{
    int min,max,temp;
    int arr[10]={1,8,6,98,3,26,21,48,2,90};
    printf("Descending order:\n");
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<=9;i++){
        printf("%d ",arr[i]);
    }
    printf("\nAscending order\n");

    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            if (arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<=9;i++){
        printf("%d ",arr[i]);
    }

    
    return 0;
}