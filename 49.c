// 49.WAP to display nCr series.

#include <stdio.h>
#include <conio.h>
int fact(int n) {
    return n == 0 ? 1 : n * fact(n - 1);
}
int main() {
    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("nCr = %d\n", fact(n) / (fact(r) * fact(n - r)));
    return 0;
}
