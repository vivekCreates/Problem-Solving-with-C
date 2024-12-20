// 40.WAP to illustrate the use of go to and exit() statements.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int x = 1;
    if (x == 1) goto label;
    printf("This won't print.\n");
label:
    printf("Using goto.\n");
    exit(0); // Ends program
}
