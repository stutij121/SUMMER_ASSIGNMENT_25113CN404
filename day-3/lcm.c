#include<stdio.h>
int gcd(int a,int b);
int main ()
{
    int a,b,lcm;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    lcm=(a*b)/gcd(a,b);
    printf("the lcm is %d",lcm);

    return 0;
}
//function defintion
int gcd(int a,int b)
{
if(b==0)
return a;
else
 return gcd(b,a%b);
}