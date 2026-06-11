#include<stdio.h>
int factorial(int n);
int main()
{
    int n,result;
    printf("enter the value of n");
    scanf("%d",&n);
    result=factorial(n);
    printf("the factorial is %d",result);
    return 0;

}
//function definition 
int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
       fact=fact*i;
    }
    return fact;

}