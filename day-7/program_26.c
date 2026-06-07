#include<stdio.h>
int fib(int n);
int main()
{
    int n,result;
    printf("enter a number ");
    scanf("%d",&n);
    result=fib(n);
    printf("%d",result);

    return 0;
}
int fib(int n)
{
    if (n==0)
    return 0;
    else if (n==1)
    return 1;
    else 
    return fib(n-1)+fin(n-2);
}



