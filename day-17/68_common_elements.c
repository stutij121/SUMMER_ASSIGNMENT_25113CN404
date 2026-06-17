#include<stdio.h>
int main ()
{
    int n1,n2,i,j,a[50],b[50],c[100];
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
    for(j=0;j<n2;j++)
    {
        scanf("%d",& b[j]);
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if (a[i]==b[j])
            {
                printf("%d",a[i]);
            }
        }
    }
    return 0;
}