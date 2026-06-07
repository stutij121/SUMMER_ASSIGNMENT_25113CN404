#include<stdio.h>
int main()
{
    int num,count=0,rem;
    printf("enter a binary number");
    scanf("%d",& num);
    while(num!=0)
    {
        rem=num%2;
        if(rem==1)
        {
            count++;
        }
        num=num/2;
    }
    printf("the total number of set bits is %d",count);
    return 0;
}