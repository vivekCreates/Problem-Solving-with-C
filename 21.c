// 21.WAP to check whether the entered no. is positive, negative or zero.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (num > 0){
        printf("%d is postitive", num);
    }
    else if (num < 0){
        printf("%d is negative", num);
    }
    else{
        printf("you enter %d", num);
    }
    return 0;
}