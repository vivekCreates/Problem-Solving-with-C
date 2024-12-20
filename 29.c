// 29.WAP to print the numbers between m to n using do-while loop.
#include <stdio.h>
#include <conio.h> 
int main() {
    int m, n;

    printf("Enter the starting value (m): ");
    scanf("%d", &m);
    printf("Enter the ending value (n): ");
    scanf("%d", &n);

    int i = m;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}
