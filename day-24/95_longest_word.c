#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, count = 0;
    int maxlen = 0;
    int start = 0, maxstart = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            count++; // count characters of current word
        }
        else
        {
            // End of a word
            if(count > maxlen)
            {
                maxlen = count;
                maxstart = start;
            }

            count = 0;
            start = i + 1; // next word starts after space
        }

        if(str[i] == '\0')
            break;
    }

    printf("Longest word = ");

    for(i = maxstart; i < maxstart + maxlen; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nLength = %d", maxlen);

    return 0;
}