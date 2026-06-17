#include<stdio.h>

int main()
{
    int a[50], b[50];
    int n1, n2, i, j, k, flag;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("Intersection is: ");

    for(i=0; i<n1; i++)
    {
        flag = 0;

        // Check if a[i] already appeared before
        for(k=0; k<i; k++)
        {
            if(a[i] == a[k])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
            continue;

        for(j=0; j<n2; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    return 0;
}