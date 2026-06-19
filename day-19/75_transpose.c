#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], t[c][r];

    // Input matrix
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Store transpose
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    // Print transpose
    printf("Transpose Matrix:\n");
    for(i = 0; i < c; i++)   // columns become rows
    {
        for(j = 0; j < r; j++)   // rows become columns
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}