
// Count number of alphabets,symbols,digits in string

#include<stdio.h>
int main()
{
    int alpha=0,num=0,sym=0;
    char s[50];
    printf("enter a string:");
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if ((s[i]>='A')&&(s[i]<='Z')||(s[i]>='a')&&(s[i]<='z'))
            alpha++;
        else if ((s[i]>='0')&&(s[i]<='9'))
            num++;
        else 
            sym++;
    }
    printf("alphabets are %d\n",alpha);
    printf("numbers are %d\n",num);
    printf("symbols are %d\n",sym);
}