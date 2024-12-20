// 52.WAP to print the pyramid(using loop) :
//  54321
//  4321
//  321
//  21
//  1

#include<stdio.h>
int main() {
    for(int i = 5; i > 0; i--) {
        for(int j = i; j > 0; j--) printf("%d", j);
        printf("\n");
    }
    return 0;
}
