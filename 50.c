// 50.WAP to print the pyramid(using loop) :
// *
// * *
// * * *
// * * * *
// * * * * *

#include <stdio.h>
#include <conio.h>
int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("* ");
        printf("\n");
    }
    return 0;
}
