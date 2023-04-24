/*//  PRINTING ELEMENTS OF AN ARRAY USING FOR LOOP

#include<stdio.h>
int main()
{
    
    int arr[5]={1,5,6,7,0};
    for(int i=0;i<=4;i++)
        printf("%d\n",arr[i]);

    return 0;
}*/

//       TAKING INPUT AS ARRAY AND PRINTING OUTPUT

#include<stdio.h>
int main()
{
    
    int arr[5] ;
    for(int i=0;i<=4;i++){
        printf("enter element no. %d:",i+1);
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<=4;i++)
        printf("%d ",arr[i]);
    return 0;
}
