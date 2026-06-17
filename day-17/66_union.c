#include<stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int n1, n2, i, j, k = 0, flag;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Add unique elements from first array
    for(i = 0; i < n1; i++)
    {
        flag = 0;

        for(j = 0; j < k; j++)
        {
            if(a[i] == c[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            c[k] = a[i];
            k++;
        }
    }

    // Add unique elements from second array
    for(i = 0; i < n2; i++)
    {
        flag = 0;

        for(j = 0; j < k; j++)
        {
            if(b[i] == c[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            c[k] = b[i];
            k++;
        }
    }

    printf("Union of arrays is: ");

    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}