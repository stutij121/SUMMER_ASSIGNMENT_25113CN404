#include<stdio.h>
int main ()
{
    int i,num,product;
    printf("enter the number");
    scanf("%d",&num);
    for(i=0;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);

    }
    return 0 ;
    


}