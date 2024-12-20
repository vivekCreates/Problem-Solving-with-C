// 41.WAP to check whether the entered no. is prime or not.

#include <stdio.h>
#include <conio.h>
int main() {
    int num, flag = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    for (int i = 2; i <= num / 2; i++) {
    printf("%d",i);
    if (num % i == 0) flag = 0;
    printf(flag ? "Prime\n" : "Not Prime\n");
    }
    return 0;
}
