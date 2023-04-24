
// maximum and minimum of given array

#include<stdio.h>
#include<limits.h>
int main()
{
    int x=INT_MIN;
    int y=INT_MAX;
    int arr[5]={100,64,7,65,10};
    for(int i=0;i<=4;i++){
        if(x<arr[i])
        x=arr[i];
    }
    printf("Maximum = %d\n",x);

    for(int i=0;i<=4;i++){
        if (y>arr[i])
        y=arr[i];
    }
    printf("Minimum = %d",y);
    
    return 0;
}