/*#include<stdio.h>

int main()
{
    char arr[]="my name is Aditya \0"; // end mein \0 lgane se !=\0 krke hum code extend krr stke hai,,,without looking fir size
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    //int i=0;
    // while(arr[i]!='\0'){
    //     printf("%c",arr[i]);
    //     i++;
    // }
    return 0;
}*/

//   WITHOUT \0 

#include<stdio.h>

int main()
{
    char arr[]="my name is Aditya "; // NO \0 IN THE END
    for(int i=0;arr[i]!='\0';i++){ // no error 
        printf("%c",arr[i]);
    }
    return 0;

    // end mein \0 nhi lgaaya lekin code run ho gya
    // kyoki computer ne end mein khud se \0 lga diya
}
