// 58.WAP to print the n raised to the power m using recursion.
#include <stdio.h>
int power(int n, int m){ 
    return m == 0 ? 1 : n * power(n, m - 1); 
}
int main(){
    printf("%d", power(2, 3));
    return 0;
}
