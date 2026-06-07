#include<stdio.h>
int rev(int n);
int main ()
{
    int n ,result;
    printf("enter the number");
    scanf("%d",& n);
    result=rev(n);
    printf("%d",result);
    return 0;
}
 int rev (int n)
 {
    static int reverse =0;
    if(n==0)
    return reverse;
    reverse=reverse*10+n%10;
    return rev(n/10);

 }