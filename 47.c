// 47.WAP to display sine series.
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float x, sum = 0;
    printf("Enter x (in radians) and terms: ");
    scanf("%f%d", &x, &n);
    for (int i = 0; i < n; i++)
        sum += pow(-1, i) * pow(x, 2 * i + 1) / tgamma(2 * i + 2);
    printf("sin(x) = %.4f\n", sum);
    return 0;
}
