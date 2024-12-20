// 43.WAP to find the factors of a no.

#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors: ");
    for (int i = 1; i <= n; i++){
        if (n % i == 0)
        printf("%d ", i);
    }
    return 0;
}
