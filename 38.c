// 38.WAP to print the power of a number nm.
#include <stdio.h>
#include <math.h>
int main() {
    int n, m;
    printf("Enter base and exponent: ");
    scanf("%d %d", &n, &m);
    printf("Result = %.0f\n", pow(n, m));
    return 0;
}