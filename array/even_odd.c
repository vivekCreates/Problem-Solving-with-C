#include <stdio.h>

int main()
{
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {   
        if (i % 2 == 0)
        {
            nums[i] += 10;
        }
        else
        {
            nums[i] *= 2;
        }
        printf("%d ",nums[i]);
    }


    return 0;
}