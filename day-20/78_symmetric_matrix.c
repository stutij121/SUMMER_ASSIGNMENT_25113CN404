#include <stdio.h>

int main()
{
    int a[50][50];
    int r, c, i, j,flag=0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input matrix
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        if(a[i][j]!=a[j][i])
        {
            flag=1;
        }
    }
}
if(flag==1)
{
    printf("symmetric matrix");
}
else {
    printf("not symmentric");
}
return 0;
}