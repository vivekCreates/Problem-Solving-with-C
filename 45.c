
// 45.WAP to print tables from 1 to n.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printf("Table of %d:\n", i);
        for (int j = 1; j <= 10; j++)
            printf("%d x %d = %d\n", i, j, i * j);
    }
    return 0;
}
