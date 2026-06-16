#include<stdio.h>
int main ()
{
    int a[5],i,n;
    int actual_sum=0;
    int missing_num;
    printf("enter the size of the array");
     scanf("%d",& n);
    printf("enter the elements");
    for(i=0;i<n-1;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        actual_sum +=a[i];
    }
    missing_num=n*(n+1)/2-actual_sum;
    printf("the missing number is %d",missing_num);
    return 0;
}

