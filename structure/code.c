


#include <stdio.h>
#include <string.h>

struct emp{
    int eno;
    char name[50];
    float salary;
};

int main() {
    struct emp e1,e2,e3;
    e1.eno=101;
    strcpy(e1.name,"henry");
    e1.salary=420.89;

    printf("Employee code is %d\n",e1.eno);
    printf("Employee name is %s\n",e1.name);
    printf("Employee salary is %.2f\n",e1.salary);

    return 0;
}
