#include<stdio.h>
int main ()
{
    int num,rev=0,rem,original;
    printf("enter the number");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
        if(rev==original)
    
        {
            printf("the given number is a palindrome");
        }
        else{

        printf("the number is not a palindrome");
        }
    }

