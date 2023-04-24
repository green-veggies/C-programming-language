

#include<stdio.h>
#define PI 3.14
int main()
{
    float deg,rad,ans;
    printf("enter angle in deg");
    scanf("%f",&deg);
    rad=deg*PI/180;
    ans=1;
    float temp=1;
    int acc=3;
    for(int i=1;i<=acc*2;i+=2){
        temp=temp*(-1)*rad*rad/(i*(i+1));
        ans=ans+temp;
    }
    printf("answer is %f",ans);

    
    
    return 0;
}