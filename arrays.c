#include<stdio.h>
int main()
{
int a[5],i;
 printf("enter the elemnts of array");
 for(i=0;i<5;i++)
 {
    scanf("%d,& a[i]");
 }
 for(i=5;i>0;i--)
 {
    printf("%d",a[i]);
 }
return 0;
}