#include <stdio.h>

int main()
{

    int a[3][3] = {12, 34, 4, 2, 45, 67, 67, 98, 9};
    int max = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("max: %d\n", max);
    return 0;
}