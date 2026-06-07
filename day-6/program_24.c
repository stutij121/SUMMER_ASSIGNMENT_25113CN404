#include<stdio.h>
int main()
{
    int num,n,result=1,i;
    printf("enter the base number");
    scanf("%d",&num);
    printf("enter the power");
    scanf("%d",& n);
    for(i=1;i<=n;i++)
    {
    result=result*num;
    }
    printf("%d",result);
    return 0;

}