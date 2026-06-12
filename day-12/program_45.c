#include<stdio.h>
int pal(int n)
int main ()
{
    int n,flag=0;
    printf("enter a number");
    scanf("%d",& n);
    flag=pal(n);
    if(flag==0)
    {
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }
    return 0;
}
int pal (int n)
{
    int rev=0,rem,original;
    original=n;
    while(n!=0)
    {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    
    }
    if(rev==original){
        return 0;
    }
    else{
        return 1;
    }

}
