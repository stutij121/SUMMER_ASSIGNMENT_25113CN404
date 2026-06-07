#include<stdio.h>
#include<math.h>
int main()
{
    int num,original,rem,sum,count,n,i,temp;
    printf("enter a range");
    scanf("%d",&n);

for(i=1;i<=n;i++)
{
    num=i;
    original=i;
    temp=i;
    count=0;
    sum=0;
    while(temp!=0)
{
temp=temp/10;
count++;
}
temp=num;
while(temp!=0)
{
 rem=temp%10;
 sum=sum+pow(rem,count);
 temp=temp/10;

}
 if(sum==original)
{
    printf("%d",original);
}
}
return 0;
}