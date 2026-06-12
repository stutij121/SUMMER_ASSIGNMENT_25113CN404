#include<stdio.h>
int perfect(int n);
int main()
{
    int n,flag=0;
    printf("enter the value of n");
    scanf("%d",& n);
    flag=perfect(n);
    if (flag==1)
    {
        printf("it is a perfect number");
    }
    else{
        printf("it is not a perfect number ");
    }
    return 0;

}
//functon defintion 
int perfect(int n)
{
    int i,original,sum=0;
   original=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
        sum=sum+i;
    }
}

if(sum==original)
{
    return 1;
}
else {
    return 0;
}
}

    