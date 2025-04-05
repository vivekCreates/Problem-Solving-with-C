#include <stdio.h>

int main()
{

    int arr[10] = {2, 4, 3, 6, 10, 1, 8, 9, 5, 7};
    int n = 10;
    printf("Before sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] > arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    printf("After sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
