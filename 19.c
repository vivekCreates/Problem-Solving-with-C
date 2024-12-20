// 19.WAP to swap the values of two variables with the help of third variable
#include <stdio.h>
#include <conio.h>

int main()
{
    int first, second, temp;
    printf("Enter the first number : ");
    scanf("%d", &first);
    printf("Enter the second number : ");
    scanf("%d", &second);
    printf("Before swapping first value is %d and second value is %d \n", first, second);
    temp = first;
    first = second;
    second = temp;
    printf("After swapping first value is %d and second value is %d ", first, second);
    return 0;
}

