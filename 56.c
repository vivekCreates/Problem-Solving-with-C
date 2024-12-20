// 56.WAP to print the factorial of a no. using a user defined function.

#include <stdio.h>
int fact(int n){
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main(){
    printf("%d", fact(5));
    return 0;
}
