#include<stdio.h>
int main()
{
    int a[5],i,n,large,small;
    printf("enter the size of array ");
    scanf("%d",&n);
    printf("enter the elemts of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large=a[0];
    small=a[0];
    for(i=0;i<n;i++)
    {
   
    if(large<a[i])
    {
        large=a[i];
    }

    if(a[i]<small)
    {
        small=a[i];
    }
}
printf("the largest element is %d",large);
printf("the smallest element is %d",small);

return 0;
}
