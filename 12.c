// 12.WAP to understand the concept of sizeof() and conditional operator(?:).

#include <stdio.h>
int main(){
    // clrscr()
    printf("size of char : %lu bytes\n",sizeof(char));
    printf("size of int : %lu bytes\n",sizeof(int));
    printf("size of float : %lu bytes\n",sizeof(float));
    printf("size of double : %lu bytes\n",sizeof(double));

    5 > 4 ? printf("It is greater")
          : printf("It is lesser");
    return 0;
}