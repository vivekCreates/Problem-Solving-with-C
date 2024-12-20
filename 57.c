// 57.WAP to print the factorial of a no. using recursion.

#include <stdio.h>
int fact(int n){
    return n == 0 ? 1 : n * fact(n - 1);
}
int main(){
    printf("%d", fact(7));
    return 0;
}
