#include<stdio.h>
int fib (int n);
int main()
{
    int n,result;
    printf("enter the number");
    scanf("%d",&n);
    result = fib(n); //function calling
    printf("the fibonacci series is %d",result);
return 0;

}
//function defintion
int fib (int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else 
return fib(n-1)+fib(n-2);
}