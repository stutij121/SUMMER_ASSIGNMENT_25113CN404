#include<stdio.h>

int main()
{
    int a[100], n, i, j;
    int maxfreq = 0;//stores the max frequency
    int element;//stores the element with maximum frequency

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Outer loop selects one element at a time
    for(i = 0; i < n; i++)
    {
        // Every element appears at least once
        int count = 1;

        // Compare current element with remaining elements
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;    // Increase frequency count
            }
        }

        // If current frequency is greater than maximum frequency
        if(count > maxfreq)
        {
            maxfreq = count;   // Update maximum frequency

            element = a[i];    // Store the corresponding element
        }
    }

    printf("Element with maximum frequency = %d\n", element);
    printf("Frequency = %d", maxfreq);

    return 0;
}
