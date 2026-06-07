#include<stdio.h>
int sum (int n);
int main()
{
    int result,n;
    printf("enter the number");
    scanf("%d",& n);
    result=sum(n);
    printf("%d",result);
    return 0;
}
int sum(int n)
{
    if (n==0)
    return 0;
    return n%10+sum(n/10);
}