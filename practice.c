/*#include <stdio.h>
//area of square
int main()
{
    int a;
    printf("ENTER SIDE OF SQUARE : ",a);
    scanf("%d",&a);
    printf("Area of square: %d", a*a);

    
    return 0;
}
*/

/*#include<stdio.h>
//AREA OF CIRCLE
int main()
{
    float rad;
    printf("ENTER RADIUS: ",rad);
    scanf("%f",&rad);
    printf("AREA OF CIRCLE : %.2f",3.14*rad*rad);
    return 0;
} 
*/
/*#include<stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    printf("%d", a%2==0);

    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    float a,b,c;
    printf("ENTER 1st NUMBER ;",a);
    scanf("%f",&a);
    printf("ENTER 2nd NUMBER ;",b);
    scanf("%f",&b);
    printf("ENTER 3rd NUMBER ;",c);
    scanf("%f",&c);
    printf("AVERAGE OF 3 NUMBERS IS :%.2f",(a+b+c)/3);



    return 0;

}
*/
/*#include<stdio.h>
int main()
{
    int age;
    printf("ENTER YOUR AGE:");
    scanf("%d",&age);
    if (age>=18) 
    {
        printf("YOUR ARE AN ADULT\n");
    }
    else {
        printf("YOU ARE NOT AN ADULT");
    } 
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a ;
    printf("ENTER AGE :");
    scanf("%d",&a);

    a >= 18? printf("ADULT\n"):printf("NOT ADULT\n");
    


    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a;
    printf("ENTER DAY (1-7) :-");
    scanf("%d",&a);
     switch (a)
     {
     case 1: printf("MONDAY\n");
        break;
     case 2: printf("TUESDAY\n");
        break;
     case 3: printf("WEDNESDAY\n");
        break;
     case 4: printf("THURSDAY\n");
        break;
     case 5: printf("FRIDAY\n");
        break;
     case 6: printf("SATURDAY\n");
        break;
     case 7: printf("SUNDAY\n");
        break;
     default: printf("ENTER A VALID NUMBER\n");
        break;
     }

    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int a ;
    printf("enter your marks :");
    scanf("%d",&a);
    // if (a>30 && a<=100){
    //     printf("pass");
    // } else{
    //     printf("fail");
    // }
    a <=30? printf("FAIL"):printf("PASS");

    return 0;
    
}*/
/*#include<stdio.h>
int main()
//program for grading 
{
    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);

    if (marks < 30 && marks>=0){
        printf("C");
    } else if(marks >=30&& marks <70){
        printf("B");
    } else if(marks <90 && marks >=70){
        printf("A");
    } else if(marks <=100 && marks >=90){
        printf("A+");
    } else{
        printf("INVALID MARKS"); 
    }
    return 0;
}
*/
/*#include<stdio.h>
int main()
//program for upper case and lower case characters
{
    char ch;
    printf("Enter any alphabet ;");
    scanf("%c",&ch);

    if ( ch>= 'a' && ch <= 'z'){
        printf("THE CHARACTER IS LOWER CASE");
    } else if (ch >= 'A' && ch<= 'Z'){
        printf("THE CHARACTER IS UPPER CASE");
    } else{
        printf("Enter valid character");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
//for loop ; print hello world 5 times
{
    for (int i=1;i<=5;i++){
        printf("Hello World\n");
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
//for loop; print numbers
{
    for (int i=100;i>=1;i=i-1){
        printf("%d\n",i);
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
//for loop; print alphabets
{
    for (char ch = 'a';ch<='z';ch=ch+1){
        printf("%c\n",ch);
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
//while loop; print numbers
{
    int i=0;
    while (i<=10){
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/
/*#include<stdio.h>
int main()
//while loop; print numbers take n from user
{
    int n;
    printf("enter ;");
    scanf("%d",&n);
    
    int i=0;
    while(i <= n){
        printf("%d\n",i);
        i=i+2;
    }
    return 0;
}*/
/*#include<stdio.h>
//do while loop
void main()
{
    int i=0;
    do{
        printf("%d\n",i);
        i++;
    }while(i<=10);

}*/
/*#include<stdio.h>
void main()
{
    int n;
    printf("ENTER NUMBER");
    scanf("%d",&n);
    int sum=0;

    for (int i=1;i<=n;i++)
    {
       sum=sum+i;
    }
    printf("%d\n",sum);

    for(int j=n;j>=1;j--){
        printf("%d\n",j);
    }
}*/
/*#include<stdio.h>
//prog for table
void main()
{
    int n;
    printf("enter number;");
    scanf("%d",&n);

    for(int i=0;i<=10;i++){
        printf("%d\n",n*i);
    }
}*/
/*#include<stdio.h>
//do while ; user input until odd number
void main()
{
    int n;
    do{
        printf("enter number");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n % 2 != 0){
            break;
        }
    }while(1);
    printf("thank you");
}*/
/*#include<stdio.h>
//do while: user input until user input multiple of 7
int main()
{
    int n;

    do{
        printf("ENTER A NUMBER:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%7==0){
            break;
        }

    }while(1);
    printf("THANK YOU");
    return 0;
}*/
/*#include<stdio.h>
//use of continue
void main()
{
    for(int i =1;i<=10;i++){
        if(i==3){
            continue;
        }
        printf("%d\n",i);
    }
}*/
/*#include<stdio.h>
//print odd numbers from 5 to 50
void main()
{
    for(int i = 5;i<=50;i++){
        if (i%2==0){
            continue;
        }
        printf("%d\n",i);
    }
}*/
/*#include<stdio.h>
// program for factorial
void main ()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    int fact=1;
    for (int i = 1;i<=n;i++){
        fact = fact*i;
        
    }
    printf("factorial:%d",fact);
}*/
/*#include<stdio.h>
//function to print namaste for indian and bonjour for french
void printnamaste();
void printbonjour();

int main(){
    int a;
    printf("1 FOR INDIAN\n 2 FOR FRENCH \n enter number:");
    scanf("%d",&a);

    if (a==1){
        printnamaste();
    }
    else if(a==2){
        printbonjour();
    }
    else{
        printf("enter a valid number");
    }
}
void printnamaste(){
    printf("NAMASTE");
}
void printbonjour(){
    printf("BONJOUR");
}*/
/*#include<stdio.h>
//function to print sum
int sum(int a , int b);

int main()
{
    int a,b;
    printf("ENTER 1 NUMBER");
    scanf("%d",&a);
    printf("ENTER 2 NUMBER");
    scanf("%d",&b);

    int s = sum( a, b);
    printf("SUM IS %d",s);
     return 0;
}
int sum(int a, int b){
    return a+b;
}*/



