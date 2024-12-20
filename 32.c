// 32.WAP to print the sum of digits of a number.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, sum = 0, digit;
    printf("Enter the number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        sum+=digit;
        num = num/10;
    }
    printf("Sum of digits of number : %d ",sum);
    return 0;
    
}