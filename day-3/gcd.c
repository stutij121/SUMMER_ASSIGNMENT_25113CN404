#include<stdio.h>
int gcd (int a,int b);
int main ()
{
    int a,b,result;
    printf("enter two numbers ");
    scanf("%d %d",&a,&b);
    result=gcd(a,b);//function calling
    printf("%d",result);
    return 0;
}
int gcd(int a,int b)
{
    if(b==0){
        return a;
    }
    else {
        return gcd (b,a % b);
    }
}
