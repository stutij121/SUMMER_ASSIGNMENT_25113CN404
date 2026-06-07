#include<stdio.h>
int main()
{
    int n,i,greatest,flag=0;
    printf("enter a number");
    scanf("%d",& n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }

    }
    if(flag==1)
    {
    printf("not prime");
    }
    else
    {
        printf("the given number is prime\n");
        greatest=i;
        printf("the greatest prime factor is %d",greatest);
    }
    return 0;
}
