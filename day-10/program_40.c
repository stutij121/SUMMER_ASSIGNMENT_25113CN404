#include<stdio.h>
int main ()
{
    int i,j,n;
    char ch;
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
        printf("%c",'A'+j-1);
        }
        //descending numbers 
        for (j=i-1;j>=1;j--)
        {
            printf("%c",'A'+j-1);
        }
         printf("\n");
    }
   
}