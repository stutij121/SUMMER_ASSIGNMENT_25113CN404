#include<stdio.h>
int main()
{
    int i,temp;
    int length=0;
    char str[50];
    printf("enter a string");
    fgets(str,sizeof(str),stdin);
    //length of string 
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    //reverse string
    for(i=0;i<length/2;i++)
    {
        temp=str[i];                  // Store first character
    str[i] = str[length-1-i];       // Put last character at first position
    str[length-1-i] = temp;         // Put stored character at last position
}
printf("the reversed string is %d",str);
return 0;
    
    }
