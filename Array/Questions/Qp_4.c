
//  MULTIPLICATION OF ELEMENTS IN ARRAY

/*#include<stdio.h>
int main()
{
    int size , pro=1;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        pro=pro*arr[i];
    }
    printf("product is %d",pro);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int size , pro=1;
    printf("Enter size of array::");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<=size-1;i++){
        printf("Enter element no. %d :",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<=size-1;i++){
        pro=pro*arr[i];
    }
    printf("product is %d",pro);
    return 0;
}