#include<stdio.h>
int prime(int n);
int main()
{
    int n,flag=0;
    printf("enter any number");
    scanf("%d",&n);
    flag=prime(n);
    if (flag==1)
    {
        printf("the given number is prime");
    }
    else
    {
        printf("the given number is not prime");
    }
}
//function defintion
int prime (int n)
{
int i;

for(i=2;i<=n/2;i++)
{
    if(n%i==0)
    {
        return 0;
    }
}
    
        return 1;
    

 
}