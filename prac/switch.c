
// switch case

//  syntax

/*switch(variable)
{
    case value 1:
        perform this;
        ,,,,,,,,,,;

    case value 2:
        perform this;
    *
    *
    * 
    * 
    case value n:
        perform this;

    default:
        instructions;
}*/

//      example of switch case

#include<stdio.h>
int main()
{
    int n;
    printf("Enter number to print day of week");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
                printf("Monday");
                break;
        case 2:
                printf("tuesday");
                break;
        case 3:
                printf("wed");
                break;
        case 4:
                printf("thursday");
                break;
        case 5:
                printf("friday");
                break;
        case 6:
                printf("Sat");
                break;
        case 7:
                printf("sunday!!");
                break;
        default:
                printf("Invalid entry");
    }
    
    
    return 0;
}

