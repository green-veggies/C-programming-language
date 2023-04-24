// ASCII TABLE USING FOR LOOP

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the maximum value:");
    scanf("%d",&n);
    printf("Ascii value |  Character\n");
    for(int i=0;i<=n;i++){
        printf(" %d | %c\n",i,i);
    }
    return 0;
}