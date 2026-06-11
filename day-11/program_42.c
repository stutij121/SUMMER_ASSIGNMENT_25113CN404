#include<stdio.h>
int max(int a,int b);
int main ()
{
    int a,b,result;
    printf("enter the value of two numbers");
    scanf("%d %d",&a,&b);
    result=max(a,b);
    printf("%d",result);
    return 0;
}

int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}