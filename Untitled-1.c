#include<stdio.h>
int main ()
{
    int a[3][3],b[3][3],product[3][3];
    int i,j;

printf("enter the elements of matrix A");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",& a[i][j]);
    }
}
printf("enter the elements of matrix b ");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",& b[i][j]);
    }
}
}