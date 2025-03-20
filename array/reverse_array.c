#include <stdio.h>

void reverse(int arr[])
{

    int i = 0, j = 4, temp;

    while (i <= j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr);
    return 0;
}