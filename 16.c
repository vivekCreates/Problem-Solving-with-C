// 16.WAP to understand the concept of unformatted character I/O functions getch( ),getche(), getchar(), putch() and putchar().
#include <stdio.h>
#include <conio.h> 

int main() {
    char ch;
    // Demonstrating getch()
    printf("Press any key (using getch()): ");
    ch = getch();  // read character without displaying it
    printf("\nYou pressed (not displayed due to getch()): %c\n", ch);
    // Demonstrating getche()
    printf("Press any key (using getche()) : ");
    ch = getche();  // read character and display it
    printf("\nYou pressed (displayed due to getche()): %c\n", ch);
    // Demonstrating getchar()
    printf("Enter a character (using getchar()): ");
    ch = getchar();  // read character and display it
    getchar(); // to capture the Enter key press after the character
    printf("You entered (displayed due to getchar()): %c\n", ch);
    // Demonstrating putch()
    printf("Using putch() to display character: ");
    putch(ch);  // display character on the screen
    printf("\n");
    // Demonstrating putchar()
    printf("Using putchar() to display character: ");
    putchar(ch);  // display character on the screen
    printf("\n");
    return 0;
}