
// count nunber of elements greater than a given number

#include<stdio.h>
#include<limits.h>

int main()
{
    int count=0,x;
    printf("Enter number for comparison::");
    scanf("%d",&x);
    int arr[7]={11,54,23,87,61,1,30};
    for(int i=0;i<=6;i++){
        if(arr[i]>x)
            count++;
    }
    printf("%d elements are greater than %d",count,x);
    return 0;
}