/*#include<stdio.h>
#include<stdlib.h>

void main()
{
    char ch='a';
    FILE *file=NULL;
    file=fopen("abc.txt","w");

    if(file==NULL)
    {
        printf("error");
        exit(1);
    }
    fputc(ch,file);
    fclose(file);
}*/

/*#include<stdio.h>
#include<stdlib.h>

void main()
{
    char ch[50]='Hello Everyone';
    FILE *file=NULL;
    file=fopen("abc.txt","w");

    if(file==NULL)
    {
        printf("error");
        exit(1);
    }
    fputc(ch,file);
    fclose(file);
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr;
    fptr=fopen("textfile.txt","w");
    if(fptr==NULL)
    printf("Error:null");
    char ch[100];
    fgets(ch,100,stdin);
    fprintf(fptr,"%s",ch);
    fclose(fptr);
    return 0;
}*/
#include<stdio.h>
#include<string.h>
struct emp
{
    char name[20];
    char id[20];
    float salary;
    int day;
    char month[10];
    int year;
};
int main()
{
    struct emp e;
    scanf("%s\n%s\n%f\n%d\n%s\n%d",&e.name,&e.id,&e.salary,&e.day,&e.month,&e.year);
    printf("%s\n%s\n%f\n%d\n%s\n%d",e.name,e.id,e.salary,e.day,e.month,e.year);
    return 0;
}
