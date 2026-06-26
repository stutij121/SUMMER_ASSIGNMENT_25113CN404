#include<stdio.h>

int main()
{
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Common characters are:\n");

    for(i = 0; str[i] != '\0'; i++)
    {
        int count = 1;

        // Count occurrences of str[i]
        for(j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        // Print only first occurrence of repeated characters
        if(count > 1)
        {
            int flag = 0;

            for(j = 0; j < i; j++)
            {
                if(str[i] == str[j])
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                printf("%c ", str[i]);
            }
        }
    }

    return 0;
}