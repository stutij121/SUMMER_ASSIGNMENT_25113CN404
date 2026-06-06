#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,product,SI,CI,A;
    printf("enter the principal amount");
    scanf("%f",&p);
    printf("enter the rate");
    scanf("%f",&r);
    printf("enter the time");
    scanf("%f",&t);
    product=p*r*t;
    SI=product/100;
    printf("the simple interest is:%f\n",SI);
    A=p*pow((1+r/100.0),t);
    CI=A-p;
    printf("coumpound interest is:%f",CI);
    return 0;
}