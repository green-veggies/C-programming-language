


#include<stdio.h>
#include<string.h>

struct initialisation1
{
    int num;
    char name[100];
    float sal; 
};
int main()
{
    struct initialisation1 emp1={101,"Aditya",97664.56};
    struct initialisation1 emp2={102,"Rahul",78664.56};

    printf("Employee number is %d \n",emp1.num);
    printf("Employee name is %s\n",emp1.name);
    printf("Employee salary is %.2f\n",emp1.sal);

    printf("\n");

    printf("Employee number is %d \n",emp2.num);
    printf("Employee name is %s\n",emp2.name);
    printf("Employee salary is %.2f\n",emp2.sal);
  
}