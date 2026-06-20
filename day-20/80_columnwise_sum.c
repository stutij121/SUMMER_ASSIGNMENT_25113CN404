#include<stdio.h>

int main()
{
    int a[50][50], r, c, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // column-wise sum
    for(j = 0; j < c; j++)      // Select one column at a time
    {
        sum = 0;                // Reset sum for the current column

        for(i = 0; i < r; i++)  // Traverse all rows of the selected column
        {
            sum = sum + a[i][j]; // Add each element of the column to sum
        }

        printf("Sum of Column %d = %d\n", j + 1, sum); // Display sum of current column
    }

    return 0;
}