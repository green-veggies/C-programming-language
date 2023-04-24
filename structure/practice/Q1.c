
// create a structure which represents vector

#include<stdio.h>
#include<string.h>

typedef struct vector{
    int x;
    int y; 
}vec;

int main()
{
    vec v1,v2;
    v1.x=8;
    v1.y=68;
    printf("X dim is %d and Y dim is %d\n",v1.x,v1.y);
    v2.x=9;
    v2.y=4;
    printf("X dim is %d and Y dim is %d\n",v2.x,v2.y);
}
