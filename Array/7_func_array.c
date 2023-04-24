// functions mein array ko bhi intergers ki tarah treat kiya jaa skta hai
// jb hum array ko func mein pass krte hai to actually mein first element ka address pass hota hai...jisme +4 krne pe next element ka address milta hai   

// UPDATING ELEMENT USING FUNCTION

/*#include<stdio.h>
void func(int x[])
{
    x[5]=6;
}
int main()
{
    int arr[10]={10,5,14,84,652,66,24,100,13,32};
    printf("%d\n",arr[5]);
    func(arr);
    printf("%d\n",arr[5]);
    return 0;
}*/

// SWAPPING ELEMENTS IN ARRAY USING FUNCTION
#include<stdio.h>
void func(int x[])
{
    int temp;
    temp=x[0];
    x[0]=x[1];
    x[1]=temp;
    return;
}

int main()
{
    int arr[4]={2,6,98,36};
    printf("%d %d\n",arr[0],arr[1]);
    func(arr);
    printf("%d %d\n",arr[0],arr[1]);

    return 0;
}