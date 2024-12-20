// 39.WAP to illustrate the use of break and continue statements.
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) continue; 
        if (i == 4) break;  
        printf("%d\n", i);
    }
    return 0;
}