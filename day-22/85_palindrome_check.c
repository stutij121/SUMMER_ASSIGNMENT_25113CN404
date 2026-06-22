#include<stdio.h>
int main()
{
    int i,flag=0;
    int length=0;
    char str[100];
    printf("enter the string");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    for(i=0;i<length/2;i++)
    {
        if(str[i]==str[length-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("given string is a palindrome");
    }
    else{
        printf("given string is not a palindrome");
    }
    return 0;

}