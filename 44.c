// 44.WAP to print the GCD(HCF) of two numbers.

#include <stdio.h>
#include <conio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    while (b != 0) { 
     int t = b; b = a % b; a = t; 
    }
    printf("GCD: %d\n", a);
    return 0;
}

