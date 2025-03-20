#include <stdio.h>

int stairs(int n)
{
    if (n==1 || n==2 || n==3) return n;
    int ways = stairs(n-1) + stairs(n-2) + stairs(n-3);
    return ways;
}


int main()
{
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);
    int ways = stairs(n);
    printf("Ways = %d\n", ways);
}