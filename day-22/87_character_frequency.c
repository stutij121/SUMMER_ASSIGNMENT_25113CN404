#include<stdio.h>

int main()
{
    char str[100];
    int i,j,count;

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);

    for(i = 0;str[i] !='\0';i++)//for individual characters
    {
        count = 1;

        // Skip if character already counted
        if(str[i] == '*')
            continue;

        for(j =i+1;str[j] !='\0'; j++)//for adjacent characters 
        {
            if(str[i] == str[j])
            {
                count++;
                str[j] = '*';   // Mark duplicate character
            }
        }

        if(str[i] != '\n')
            printf("%c = %d\n", str[i], count);
    }

    return 0;
}