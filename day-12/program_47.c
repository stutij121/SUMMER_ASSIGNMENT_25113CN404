#include<stdio.h>
int fib(int n);
int main ()
{
    int n,i,result;
    printf("enter the value of n");
    scanf("%d",& n);
    for(i=0;i<n;i++)
    {
    result=fib(i);
    printf("%d",result);
    }
    return 0;
}
//function definition
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else return fib(n-1)+fib(n-2);

}