#include<stdio.h>
int main()
{
    int arr[5],i,n;
    printf("enter the size of array");
    scanf("%d",& n);
    for(i=0;i<n;i++)
    {
    printf("enter the elements of the array");
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}