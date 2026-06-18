#include <stdio.h>

int main()
{
    int a[100], n, i, j, minIndex, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++)
    {
        // Assume current element is the smallest
        minIndex = i;

        // Find the index of the smallest element
        // in the remaining unsorted part
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap the smallest element with current element
        temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}