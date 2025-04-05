#include <stdio.h>
int main()
{
    int arr[10] = {2, 6, 7, 1, 3, 9, 8, 10, 5, 4};
    int n = 10;
    printf("Before sorting:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n");
    printf("After sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}