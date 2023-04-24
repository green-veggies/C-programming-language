// PRINTING ADDRESSES OF ARRAY ELEMENTS

#include<stdio.h>
int main()
{
    int arr[5]={10,5,87,63,19};
    for (int i=0;i<=4;i++){
        printf("%p\n",&arr[i]);
    }
    return 0;
}