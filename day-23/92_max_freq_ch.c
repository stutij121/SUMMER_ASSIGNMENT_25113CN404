#include<stdio.h>

int main()
{
    char str[100];
    int i, j, count, max = 0;
    char maxchar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for(i = 0; str[i] != '\0'; i++)
    {
        count = 0;

        // Count frequency of current character
        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        // Update maximum frequency and character
        if(count > max)
        {
            max = count;
            maxchar = str[i];
        }
    }

    printf("Maximum occurring character = %c\n", maxchar);
    printf("Frequency = %d", max);

    return 0;
}