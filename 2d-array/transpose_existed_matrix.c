#include <stdio.h>

int main()
{

    int n;
    printf("Enter the nxn matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d row: ", i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}