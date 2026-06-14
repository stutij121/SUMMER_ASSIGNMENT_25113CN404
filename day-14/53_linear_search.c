#include<stdio.h>
int main ()
{
    int a[5],i,n,key,pos=-1;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the number of elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter the element to be found");
    scanf("%d",& key);

    for(i=0;i<n;i++)
    {
       if( key==a[i])
       {
        pos=i;
        break;
       }

    }
    printf("the element is found at %d",pos+1);
    return 0;

}