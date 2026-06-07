#include<stdio.h>
int main ()
{
    int rem,sum=0,n;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        
    }
    printf("the sum is %d",sum);

    return 0;
}