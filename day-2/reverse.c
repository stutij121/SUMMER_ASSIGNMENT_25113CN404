#include<stdio.h>
int main ()
{
    int n,i,rev=0,rem;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    }
    printf("the reverse nummber is %d",rev);
    return 0;

}