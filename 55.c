// 55.WAP to print the sum of two numbers using user defined function.

#include <stdio.h>
int sum(int a, int b){
     return a + b; 
}
int main(){
    int x = 5, y = 10;
    printf("%d", sum(x, y));
    return 0;
}
