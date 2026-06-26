#include <stdio.h>
#include <string.h>

int main()
{
    char name[50][50], temp[50];
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);

    getchar(); // Consume newline left by scanf

    printf("Enter names:\n");
    for(i = 0; i < n; i++)
    {
        fgets(name[i], sizeof(name[i]), stdin);

        // Remove newline character added by fgets
        name[i][strcspn(name[i], "\n")] = '\0';
    }

    // Sorting names alphabetically
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            // Compare two names
            if(strcmp(name[i], name[j]) > 0)
            {
                // Swap names
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}