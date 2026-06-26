#include<stdio.h>

int main()
{
    int a[50], b[50], c[100];
    int n1, n2, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // i -> first array index
    // j -> second array index
    // k -> merged array index
    i = 0;
    j = 0;
    k = 0;

    // Compare elements of both arrays and store the smaller one
    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];  // Copy element from first array
            i++;          // Move to next element of first array
        }
        else
        {
            c[k] = b[j];  // Copy element from second array
            j++;          // Move to next element of second array
        }

        k++;  // Move to next position in merged array
    }

    // Copy remaining elements of first array (if any)
    while(i < n1)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array (if any)
    while(j < n2)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged array:\n");

    // Print merged array
    for(i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}