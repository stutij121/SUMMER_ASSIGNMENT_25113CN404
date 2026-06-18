#include <stdio.h>

int main()
{
    int a[100], n, i;
    int key;
    int low, high, mid;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted array elements
    printf("Enter sorted array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    // Initialize first and last indices
    low = 0;
    high = n - 1;

    // Binary Search
    while(low <= high)
    {
        // Find middle index
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            found = 1;
            break;  // Element found
        }
        else if(key < a[mid])
        {
            // Search in left half
            high = mid - 1;
        }
        else
        {
            // Search in right half
            low = mid + 1;
        }
    }


    if(found==1)
    {
        printf("Element found at index %d", mid);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}