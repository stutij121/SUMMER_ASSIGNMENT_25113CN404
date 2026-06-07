#include<stdio.h>
int fac (int n);
int main()
{
    int n,result;
    printf("enter a number");
    scanf("%d",&n);
    result=fac(n);
    printf("%d",result);
    return 0;
}
int fac(int n)
{
    
if(n==1||n==0)
return 1;
else 
return n*fac(n-1);
}


