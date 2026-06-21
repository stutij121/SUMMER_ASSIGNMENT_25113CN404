#include<stdio.h>
int main ()
{
    char str[50];
    int i=0;
    printf("enter a string");
    fgets(str,sizeof(str),stdin);
    while(str[i]!= '\0' && str[i]!='\n')
    {
        i++;
    }
    printf("the lenght of string is %d",i);

    return 0;

}