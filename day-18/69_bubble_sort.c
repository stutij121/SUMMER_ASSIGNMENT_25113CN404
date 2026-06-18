#include<stdio.h>
int main ()
{
    int a[100];
    int n,i,j,temp;
    printf("enter the size of array");
    scanf("%d",& n);
    printf("enter the elements of the array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //for no. of passes
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)//adjacent elements
        {
          if( a[j]>a[j+1])
          {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
          }

        }
    }
    printf("the sorted array is:");
    for(i=0;i<n;i++)
    {
    printf(" %d",a[i]);
    }
    return 0;
}