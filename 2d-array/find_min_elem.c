#include <stdio.h>

int main()
{

    int a[3][3] = {
        12, 34, 4,
        2,  45, 67,
        67,  1,  9
    };
    int min = a[1][1];
    int r,c;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                r=i;
                c=j;
            }
        }
    }

    printf("min: %d\n", min);
    printf("index:(%d,%d)\n",r,c);
    
    return 0;
}