#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Check if lengths are equal
    if(strlen(str1) != strlen(str2))
    {
        printf("Not Rotation");
        return 0;
    }

    // Copy str1 into temp
    strcpy(temp, str1);

    // Concatenate str1 again
    strcat(temp, str1);

    // Check if str2 exists in temp
    if(strstr(temp, str2) != NULL)
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}