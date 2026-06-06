#include<stdio.h>
int main ()
{
    int a[5],i,max=0;
    printf("enter the elemnts of the array");
    for(i=0;i<5;i++)
    {
        scanf("%d",& a[i]);
    }
        max=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        printf("the greatest element is =%d",max);

    }
    return 0;
}  
 