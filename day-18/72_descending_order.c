#include<stdio.h>

int main()
{
    int a[100], n, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Sorting in descending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            // Swap if left element is smaller
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Print sorted array
    printf("Array in descending order:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}