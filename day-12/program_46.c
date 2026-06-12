#include<stdio.h>
#include<math.h>
int armstrong(int n);
int main ()
{
    int n,flag=0;
    printf("enter a number");
    scanf("%d",& n);
    flag=armstrong(n);
    if(flag==1)
    {
        printf("it is an armstrong number");
    }
    else{
        printf("it is not an armstrong number");
    }
 
    return 0;
}
//function definition
int armstrong(int n)
{
    int rem,original,sum=0,count=0;
    original =n;
    while(n!=0)
    {
        n=n/10;
        count++;//count the digits
    }
    n=original;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    if(sum==original)
    {
        return 1;
    }
    else {
        return 0;
    }

}