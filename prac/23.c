 
 // compare string with and without inbuilt function

 #include<stdio.h>
 #include<string.h>
 int main()
 {
    char s1[50];
    puts("enter string1");
    gets(s1);
    char s2[50];
    puts("enter string2");
    gets(s2);
    int a=strcmp(s1,s2);
    if (a<0) printf("s2 is greater");
    else if (a>0) printf("s1 is greater");
    else printf("both are equal");
    
    return 0;
 }