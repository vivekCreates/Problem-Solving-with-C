// 42.WAP to check whether the entered no. is perfect or not.

#include <stdio.h>
#include <conio.h>
int main()
{
    int num, sum = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++){
        if (num % i == 0) sum += i;
    }
    printf(sum == num ? "Perfect\n" : "Not Perfect\n");
    return 0;
}
