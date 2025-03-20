#include <stdio.h>

int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        

        for (int k = 0; k <= i; k++)
        {
            int res = combination(i, k);
            printf("%d ", res);
        }
        printf("\n");
    }

    return 0;
}