// 17.WAP to show the use of file inclusion(# include) and macro expansion directive(#define).
#include <stdio.h>
#include <conio.h>
#define pi 3.14

int main()
{
    float r = 12, area;
    area = pi*(r*r);
    printf("Area of circle : %.2f", area);
    return 0;
}