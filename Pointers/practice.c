// Sum of 2 numbers
/*
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);

    sum=add(&a,&b);
    printf("sum = %d",sum);
    return 0;
}
int add(int *x,int *y)
{
    int p;
    p=*x+*y;
    return p;
}
*/
/*#include<stdio.h>
int main()
{
    int a,b,*ptr1=&a,*ptr2=&b;
    printf("enter 2 num");
    scanf("%d %d",ptr1,ptr2);

    if(*ptr1>*ptr2)
    printf("%d is maximum",*ptr1);
    else
    printf("%d is max",*ptr2);
}*/
/*#include <stdio.h>
int len(char*);
 
void main() 
{
   char str1[25];
   int l;
   
   printf(" Input a string : ");
   fgets(str1, sizeof str1, stdin);
   
   l = len(str1);
   printf(" The length of the given string %s is : %d ", str1, l-1);
   printf("\n\n");

}
 
int len(char* ch) // ch = base address of array str1 ( &str1[0]  )
{
   int ctr = 0;
   while (*ch != '\0') 
   {
      ctr++;
      ch++;
   }
   return ctr;
}*/

/*#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}


int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d",&a,&b);

    swap(&a,&b);
    printf("swapped %d %d",a,b);
}*/

#include <stdio.h>
int main()
{
    char str1[50];
    char revstr[50];
    char *stptr = str1;
    char *rvptr = revstr;
    int i=-1;	
    printf(" Input a string : ");
    scanf("%s",str1);
    while(*stptr)
    {
     stptr++;
     i++;
    }
    while(i>=0)
    {
     stptr--;
     *rvptr = *stptr;
     rvptr++;
     --i;
    }
    *rvptr='\0';
    printf(" Reverse of the string is : %s\n\n",revstr);
    printf("address is %p",&revstr);
    return 0;
}