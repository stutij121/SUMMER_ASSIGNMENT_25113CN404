#include<stdio.h>
#include<math.h>
int main()
{
    int num,original,rem,sum=0,count=0;

printf("enter a number ");
scanf("%d",& num);
original = num;
while(num!=0)
{
num=num/10;
count++;
}
num=original;
while(num!=0)
{
 rem=num%10;
 sum=sum+pow(rem,count);
 num=num/10;
}
 if(sum==original)
 printf("given number is armstrong");
 else
 printf("given number is not armstrong");
 return 0;
}