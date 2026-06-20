#include<stdio.h>

int main()
{
    int a[50][50], r, c, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

      // row-wise sum
    for(i = 0; i < r; i++)      // Select one row at a time
    {
        sum = 0;                // Reset sum for the current row

        for(j = 0; j < c; j++)  // Traverse all columns of the selected row
        {
            sum = sum + a[i][j]; // Add each element of the row to sum
        }

        printf("Sum of Row %d = %d\n", i + 1, sum); // Display sum of current row
    }

    return 0;
}