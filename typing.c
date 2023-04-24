#include<stdio.h>

int fact(int v){
    int fac=1;
    for(int i=1;i<=v;i++){
        fac=fac*i;
    }
    return fac;
}
int comb(int x,int y){
    int ncr=fact(x)/(fact(x-y)*fact(y));
    return ncr;
}
int main(){
    int n;
    printf("Enter number of lines :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++)
        printf(" ");
        for(int j=1;j<=i;j++){
            int q=comb(i,j); 
            printf("%d ",q);
        }
        printf("\n");   
    }
    return 0;
}