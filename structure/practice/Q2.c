


#include<stdio.h>
#include<string.h>

typedef struct vector{
    int x;
    int y; 
}vec;

struct vector sumvec(vec v1,vec v2){
    vec result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}

int main()
{
    vec v1,v2,sum;
    v1.x=8;
    v1.y=6;
    printf("X dim is %d and Y dim is %d\n",v1.x,v1.y);
    v2.x=9;
    v2.y=4;
    printf("X dim is %d and Y dim is %d\n",v2.x,v2.y);
    
    sum=sumvec(v1,v2);
    printf("Sum of vectors is : X = %d\nY=%d",sum.x,sum.y);
}
