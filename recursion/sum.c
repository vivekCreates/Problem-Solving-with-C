#include <stdio.h>

int sum_one_to_n(int n)
{
    if (n == 1) return 1;
    return n + sum_one_to_n(n - 1);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum = sum_one_to_n(n);
    printf("%d\n",sum);

    return 0;
}