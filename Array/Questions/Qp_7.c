#include<stdio.h>

//   ODD INDEXED NUMBER -> MULTIPLY BY 2
//   EVEN INDEXED NUMBER -> ADD 10 TO IT

int main()
{
    int arr[7]={11,54,23,87,61,1,30};
    for(int i=0;i<=6;i++){
        if(i%2==0){
            printf("%d ",arr[i]+10);
        }
        else
        printf("%d ",arr[i]*2);
    }
    return 0;
}