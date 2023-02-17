/*#include<stdio.h>
int main()
//ncr without using function
{
    int n,r;
    printf("enter n\n;");
    scanf("%d",&n);
    printf("enter r;");
    scanf("%d",&r);
    int nfact=1;//n!
    int rfact=1;//r!
    int nrfact=1;//n-r!
    for(int i = 2;i<=n;i++){
        nfact=nfact*i;
    }
    for(int i = 2;i<=r;i++){
        rfact=rfact*i;
    }
    for(int i = 2;i<=n-r;i++){
        nrfact=nrfact*i;
    }
    int ncr = nfact/(rfact*nrfact);
    printf("%d C %d = %d\n",n,r,ncr);
    return 0;
}*/

#include<stdio.h>
//ncr using function
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int main()
{
    int n,r;
    printf("enter n;");
    scanf("%d",&n);
    printf("enter r;");
    scanf("%d",&r);
    int nfact=fact(n);//n!
    int rfact=fact(r);//r!
    int nrfact=fact(n-r);//n-r!
    int ncr= nfact/(rfact*nrfact);
    printf("%d",ncr);

    return 0;
}
