#include<stdio.h>

int main()
{
    char str[50];
    int i;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    for(i = 0;str[i]!='\0';i++)
    {
        if(str[i] >='a'&& str[i] <='z')
        {
            str[i]=str[i] -32;   // Convert into uppercase 
         }
    }
    printf("Lowercase string: %s",str);

    return 0;
}