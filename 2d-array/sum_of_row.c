#include <stdio.h>

int main()
{

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 20},
        {7, 8, 9}
    };


    int sum = 0,row_index=-1;

    for (int i = 0; i < 3; i++)
    {
        int row_sum = 0;
        for (int j = 0; j < 3; j++)
        {
            row_sum += arr[i][j];
        }
       
        if (row_sum>sum)
        {
            sum = row_sum;
            row_index = i;
        }
        
    }
    
    printf("sum:%d\n",sum);
    printf("index:%d\n",row_index);

    return 0;
}