#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the row of 1st matrix: ");
    scanf("%d", &m);

    printf("Enter the column of 1st matrix: ");
    scanf("%d", &n);

    int p, q;
    printf("Enter the row of 2nd matrix: ");
    scanf("%d", &p);

    printf("Enter the column of 2nd matrix: ");
    scanf("%d", &q);

    if (n != p)
    {
        printf("Multiplication of matrix not possible with this order of matrices\n");
    }
    else
    {

        int a[m][n], b[p][q];

        int rc = n;
        printf("Enter the element of 1st matrix: ");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the element of 2nd matrix: ");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < rc; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("The resultant matrix: \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}