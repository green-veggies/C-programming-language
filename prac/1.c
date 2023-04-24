// ascending order and descending order
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("3 num:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c){
        if(b>c){
            printf("%d %d %d\n",a,b,c);
            printf("%d %d %d\n",c,b,c);
        }
        if(c>b){
            printf("%d %d %d\n",a,c,b);
            printf("%d %d %d\n",b,c,a);
        }
    }
    else if (b>a&&b>c){
        if (a>c){
            printf("%d %d %d\n",b,a,c);
            printf("%d %d %d\n",c,a,b);
        }
        else if (c>a) {
            printf("%d %d %d\n",b,c,a);
            printf("%d %d %d\n",a,c,b);
        }
    }
    else if (c>a && c>b){
        if (a>b){
            printf("%d %d %d\n",c,a,b);
            printf("%d %d %d\n",b,a,c);
        }
        else if (b>a){
            printf("%d %d %d\n",c,b,a);
            printf("%d %d %d\n",a,b,c);
        }
    }
    return 0;
}