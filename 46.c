
// 46.WAP to display Pascal triangle.
#include <stdio.h>
#include <conio.h>
int main() {
    int n, c;
    printf("Enter rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            c = j == 0 || i == j ? 1 : c * (i - j + 1) / j;
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}
