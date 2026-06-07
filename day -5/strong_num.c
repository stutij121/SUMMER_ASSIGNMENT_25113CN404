#include<stdio.h>
int main ()
{
    int n,j,fact,rem,original,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        rem=n%10;
        fact=1;
    for(j=1;j<=rem;j++)
    {
        fact=fact*j;
    }
        sum=sum+fact;
        n=n/10;
    }

    
    if(sum==original)
    printf("strong number");
    else
    printf("not a strong number");

    return 0;
}

    