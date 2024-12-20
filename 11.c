// 11.WAP to understand the concept of increment (++) and decrement operator (--) (both prefix and postfix).
#include <stdio.h>
int main(){
    int x = 10, y=20;

    printf("<-----POSTFIX INCREAMENT OPERATOR----->");
    printf("\nValue of x %d\n",x);
    printf("Value of x++ %d\n",x++);
    printf("Value of x %d\n",x);

    printf("<-----PRETFIX INCREAMENT OPERATOR----->");
    printf("\nValue of y %d\n",y);
    printf("Value of ++y %d\n",++y);
    printf("Value of y %d\n",y);

    printf("<-----POSTFIX DECREAMENT OPERATOR----->");
    printf("\nValue of x %d\n",x);
    printf("Value of x-- %d\n",x--);
    printf("Value of x %d\n",x);

    printf("<-----PREFIX DECREAMENT OPERATOR------>");
    printf("\nValue of y %d\n",y);
    printf("Value of --y %d\n",--y);
    printf("Value of y %d\n",y);
    return 0;
}