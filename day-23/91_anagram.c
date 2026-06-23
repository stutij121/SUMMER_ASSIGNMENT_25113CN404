#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50], str2[50];
    int i, j, len1, len2, count1, count2, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    // If lengths are different, they cannot be anagrams
    if(len1 != len2)
    {
        printf("Not Anagram");
        return 0;
    }

    // Check frequency of each character
    for(i = 0; str1[i] != '\0'; i++)
    {
        count1 = 0;
        count2 = 0;

        for(j=0; str1[j]!='\0';j++)
        {
            if(str1[i]==str1[j])
                count1++;
        }

        for(j=0;str2[j]!='\0';j++)
        {
            if(str1[i]==str2[j])
                count2++;
        }

        if(count1!=count2)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Anagram Strings");
    else
        printf("Not Anagram");

    return 0;
}