// 10.WAP to understand the concept of logical operators (&&, ||, !).
#include <stdio.h>

int main(){
    int a=12 , b = 8;
    printf("(a<b) && (a>b) : %d\n",(a<b) && (a>b));
    printf("(a<=b) || (a>=b) : %d\n",(a<=b) || (a>=b));
    printf("!(a==b) : %d\n",!(a==b));
    return 0;
}