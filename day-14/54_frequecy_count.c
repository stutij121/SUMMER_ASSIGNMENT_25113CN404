#include<stdio.h>
int main ()
{
    int a[5],i,n,key,count=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the number of elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element whose frequency needs to be checked");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        count++;
    }
    printf("the frequency of the element is %d",count);
    return 0;
}
