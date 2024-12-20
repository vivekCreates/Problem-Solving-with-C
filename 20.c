// 20.WAP to swap the values of two variables without using third variable.

#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b;
    printf("Enter the two nummbers to be swapped : ");
    scanf("%d %d",&a,&b);
    printf("\nBefore swapping value of a is %d and value of b is %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping value of a is %d and value of b is %d",a,b);
    return 0;
}