// 35 WAP to check a number is palindrome or not.
#include <stdio.h>
#include <conio.h>
int main() {
    int num, temp, rem, reversed = 0;
    // clrscr();
    printf("Enter the number: ");
    scanf("%d", &num);

    temp = num; 
    while (temp != 0) {
        rem = temp % 10;       
        reversed = reversed * 10 + rem;
        temp = temp / 10;         
    }
    if (reversed == num) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    // getch();

    return 0;
}
