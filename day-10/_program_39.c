#include<stdio.h>
int main ()
{
    int i,j,n;
    printf("enter the number of rows");
    scanf("%d",& n);
    for(i=1;i<=n;i++)
    {
        for (j=0;j<=n-i;j++)
        {
            printf(" ");
            //ascending numbers
        }
        for(j=1;j<=i;j++){
        printf("%d",j);
        }
        //descending numbers 
        for (j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
         printf("\n");
    }
   
}