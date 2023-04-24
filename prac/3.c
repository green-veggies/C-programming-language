// while (syntax)

// while(condition_is_true)
// {
//     //do this
//     //''''''
    
// }

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i=1;
    while(i<=a)
    {
        printf("%d",i);
        i++;
    }  
    return 0;
}