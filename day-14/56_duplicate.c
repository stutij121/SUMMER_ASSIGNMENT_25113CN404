#include<stdio.h>
int main()
{
    int a[5],i,n,j;
    printf("enter the size of array");
    scanf("%d",& n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
            printf("it is a duplicate of%d",a[i]);
            }
        }
    }
    return 0;
}
    