#include<stdio.h>
int main()
{
    int arr[5],i,n,sum=0,avg;
    printf("enter the size of array ");
    scanf("%d,&n");
    printf("enter the elements of the array");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    }
    avg=sum/5;
    
    printf("the sum is %d",sum);
    printf("the average is %d",avg);
    
    return 0;

}