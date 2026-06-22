#include<stdio.h>

int main()
{
    char str[100];
    int i,spaces=0;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i]==' ')
        {
            spaces++;
        }
    }

    printf("Number of words = %d", spaces+1);

    return 0;
}