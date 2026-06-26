#include <stdio.h>
#include <string.h>

int main()
{
    char word[50][50], temp[50];
    int n, i, j;

    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter words:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", word[i]);
    }

    // Sort words according to their length
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            // Compare lengths of two words
            if(strlen(word[i]) > strlen(word[j]))
            {
                // Swap words
                strcpy(temp, word[i]);
                strcpy(word[i], word[j]);
                strcpy(word[j], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\n", word[i]);
    }

    return 0;
}