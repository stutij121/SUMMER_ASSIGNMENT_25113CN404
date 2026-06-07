 #include<stdio.h>
int main()
{
    int num,i,sum;
    printf("enter a number ");
    scanf("%d",& num);
    sum=0;
    for(i=1;i<num;i++)
    
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    printf("perfect number");
    else
    printf("not a perfect number");

    return 0;
    
}