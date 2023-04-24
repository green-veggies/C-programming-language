
//   MAXIMUM VALUE IN ARRAY

/*#include<stdio.h>
int main()
{
    int x=0;
    int arr[11]={4,46,87,20,88,6,48,12,20,87,69 };
    for(int i=0;i<=10;i++){
        if(arr[i]>x)
        x=arr[i];
    }
    printf("Maximum value is %d",x);
    return 0;
}*/

//  x ki value zero dene se negative mein maximum nhi niklega
//  uske liye #include<limit.h> naam se header file hoti hai
//  INT_MIN ki value -2147483648 hoti hai jo hmesha minimum rhegi
//  -2147483648 is nothing but 2 power 32

#include<stdio.h>
#include<limits.h>
int main()
{
    int x=INT_MIN;
    int arr[11]={4,46,87,20,88,6,48,12,20,87,69 };
    for(int i=0;i<=10;i++){
        if(arr[i]>x)
        x=arr[i];
    }
    printf("Maximum value is %d",x);
    return 0;
}
