#include<stdio.h>
int main()
{
    int binary[32],decimal,i=0;
    printf("enter a decimal number");
    scanf("%d",&decimal);
    while(decimal!=0)
    {

    binary[i]=decimal%2;
    decimal=decimal/2;
    i++;
    }

    for(i=i-1;i>=0;i--)
    {
    printf("binary number is %d",binary[i]);
}
return 0;
}
