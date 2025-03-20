#include <stdio.h>

void greeting(int n)
{
    if (n == 0) return;
    printf("Good Morning\n");
    greeting(n - 1);
    return;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    greeting(n);
    return 0;
}