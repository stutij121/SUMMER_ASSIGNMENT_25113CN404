#include <stdio.h>

int main()
{
    int a[100], n, i, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    temp = a[n - 1];   // Store last element

    for(i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = temp;   // Put last element at first position

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}