#include<stdio.h>
int main()
{
    int a[5],largest,second,i,n;
    printf("enter the size of array");
    scanf("%d",& n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    second=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            second=largest;
            largest=a[i];
            
        }
        else if(a[i]>second && a[i]!=largest)
        {
            second=a[i];
        }
        
    }
    printf("the second largest element is %d",second);
    return 0;
}