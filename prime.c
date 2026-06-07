#include<stdio.h>
int main()
{
    int num,i,flag=0;
    printf("enter a number");
    scanf("%d",&num);
    for(i=2;i<=num/2.0;i++)
    {
        if(num/i==0)
        {
            flag=1;
        }
    }
        if(flag==1)
        {

        printf("the number is not prime");
    }
    else 
    {
        printf("the number is prime");
    }
    
    return 0;
}

