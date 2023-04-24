
//   FIND DIFFERENCE BETWEEN SUM OF EVEN INDEX AND ODD INDEX 

#include<stdio.h>
int main()
{
    int sum_odd=0,sum_even=0,diff;
    int arr[7]={11,54,23,87,61,1,30};
    for(int i=0;i<=6;i++){
        if(i%2==0){
            sum_even=sum_even+arr[i];
        }
        else if(i%2!=0){
            sum_odd=sum_odd+arr[i];
        }
    }
    diff=sum_even-sum_odd;
        printf("%d",diff);
    return 0;
}