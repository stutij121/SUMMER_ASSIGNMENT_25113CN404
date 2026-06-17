#include<stdio.h>
int main ()
{
    int n1,n2,i,a[50],b[50],c[100];
    printf("enter the size of array a");
    scanf("%d",& n1);
    printf("enter the size of array b");
    scanf("%d",& n2);
    printf("enter the elements of array a");
    for(i=0;i<n1;i++)
    {
        scanf("%d",& a[i]);
    }
    printf("enter the elements of array b");
    for(i=0;i<n2;i++)
    {
        scanf("%d",& b[i]);
    }
    //copy elements from first array into third array
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    //copy elements from second array into third array
    for(i=0;i<n2;i++)
    {
        c[i+n1]=b[i];
    }
    printf("the merged array is :\n");
    for(i=0;i<n1+n2;i++)
    {
         printf("%d",c[i]);
    }
    return 0;
    }
