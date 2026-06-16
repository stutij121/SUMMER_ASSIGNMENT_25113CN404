#include<stdio.h>
int main ()
{
    int i,j,n,a[5];
    found=0;
    printf("enter the size of array");
    scanf("%d",& n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
            scanf("%d",a[i]);
        
    }
    printf("enter the sum ");
    scanf("%d",& sum);
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("Pair found: %d and %d\n", a[i], a[j]);
                found = 1;
            }
        }
    }
    if(found==0)
    {
        printf("no pair found");
    }

    }
