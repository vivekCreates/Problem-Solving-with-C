// 18.WAP to show the use of conditional compilation directives. 
#include <stdio.h>
#include <conio.h>
#define A 30
#define B 10


int main()
{
    int res;

    if (A>B)
    {
        res = A+B;
        printf("sum = %d",res);
    }else{
        res = A-B;
        printf("difference = %d",res);
    }
    getch();
    return 0;
}