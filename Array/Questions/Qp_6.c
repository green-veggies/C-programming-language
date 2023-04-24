// MINIMUM VALUE IN ARRAY

/*#include<stdio.h>
#include<limits.h>
int main()
{
    int x=INT_MAX;
    int arr[5]={1000,6,4,8,100};
    for(int i=0;i<=4;i++){
        if(x>arr[i])
        x=arr[i];    
    }
    printf("Minimum value is %d",x);
    return 0;
}*/

// MINIMUM VALUE IN USER INPUT

#include<stdio.h>
#include<limits.h>
int main()
{
    int x=INT_MAX,size;
    printf("Enter size of array ::");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<=size-1;i++)
    {
        printf("Enter element no. %d::",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=size-1;i++){
        if(x>arr[i])
        x=arr[i];    
    }
    printf("Minimum value is %d",x);
    return 0;
}




