#include <stdio.h>

int main()
{
    int sum = 0;
    int numbers[10] = {2, 53, 14, 145, 54, 24, 88, 32, 12, 99};

    for (int i = 0; i <= 9; i++)
        sum+= numbers[i];
    
    printf("Sum: %d",sum);
}