
#include <stdio.h>
#include<limits.h>
int main()
{

    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 10;
    
    printf("Before sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n-1; i++)
    {
        int min = INT_MAX;
        int idx;
       
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
        }
    printf("After sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}