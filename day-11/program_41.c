#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b,result;
    printf("enter the value of two numbers");
    scanf("%d%d ",&a,&b);
    result=sum(a,b);
    printf("the sum is %d",result);
    return 0;
}
    //function definition
    int sum (int a,int b)
    {
    return a+b;
    }
