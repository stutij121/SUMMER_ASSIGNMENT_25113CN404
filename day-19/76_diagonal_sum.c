#include<stdio.h>

int main()
{
    int a[10][10], n, i, j;
    int mainSum = 0, secondarySum = 0;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < n; i++)
    {
        mainSum = mainSum + a[i][i];           // Main diagonal
        secondarySum = secondarySum + a[i][n-1-i]; // Secondary diagonal
    }

    printf("Sum of main diagonal = %d\n", mainSum);
    printf("Sum of secondary diagonal = %d\n", secondarySum);

    return 0;
}