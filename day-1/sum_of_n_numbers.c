#include<stdio.h>
int main ()
{
    int i,n,sum=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
    {
        sum=sum+i;
    }
    printf("the sum is %d:",sum);
    return 0;
    }
