#include<stdio.h>
int main ()
{
    int rem,product=1,n;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        product=product*rem;
        n=n/10;
        
    }
    printf("the sum is %d",product);

    return 0;
}