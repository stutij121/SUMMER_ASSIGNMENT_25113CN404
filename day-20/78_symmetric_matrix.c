#include <stdio.h>

int main()
{
    int a[50][50];
    int r, c, i, j;
    int flag = 1;   

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // A symmetric matrix must be square
    if (r != c)
    {
        printf("Matrix is not symmetric because it is not a square matrix.");
        return 0;
    }

    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Check if a[i][j] is equal to a[j][i]
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }

        
        if(flag == 0)
        {
            break;
        }
    }

    // Display the result
    if(flag == 1)
    {
        printf("Matrix is symmetric.");
    }
    else
    {
        printf("Matrix is not symmetric.");
    }

    return 0;
}
