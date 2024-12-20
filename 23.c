// 23.WAP to find the greatest of two numbers entered by the user.

#include <stdio.h>
#include <conio.h>

int main()
{
    int first, second;
    printf("Enter the first number : ");
    scanf("%d", &first);
    printf("Enter the second number : ");
    scanf("%d", &second);

    if (first > second){
        printf("%d is greater than %d", first, second);
    }
    else{
        printf("%d is greater than %d", second, first);
    }
    return 0;
}