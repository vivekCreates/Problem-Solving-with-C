// 33.WAP to print reverse of a number.
#include <stdio.h>
#include <conio.h>
int main() {
    int num, rem, res = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0) {
        rem = num % 10; 
        res = res * 10 + rem;
        num = num / 10;
    }

    printf("Reversed number: %d\n", res);
    return 0;
}
