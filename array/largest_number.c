#include <stdio.h>

int main()
{
    int numbers[10] = {10, 20, 100, 40, 101, 60};
    int max = 0;

    for (int i = 0; i <= 5; i++)
    {
        if (max<numbers[i]){
            max = numbers[i];
        }
    }
    printf("Largest number: %d\n", max);
}