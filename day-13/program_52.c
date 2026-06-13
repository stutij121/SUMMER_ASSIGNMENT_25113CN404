#include<stdio.h>
int main()
{
    int a[5],i,n,ecount=0,ocount=0;   //ecount=even elements and ocount=odd elements
    printf("enter the six=ze of array");
    scanf("%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",& a[i]);
        if(a[i]%2==0)
        {
            ecount++;
        }
        else{
            ocount++;
        }
    }
    printf("the number of even elements are %d",ecount);
    printf("the number of odd elemts is %d",ocount);

    return 0;


}