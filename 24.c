// 24.WAP to find the greatest of three numbers entered by the user.

#include <stdio.h>
#include <conio.h>

int main()
{
    int first, second, third;
    printf("Enter the first number : ");
    scanf("%d", &first);
    printf("Enter the second number : ");
    scanf("%d", &second);
    printf("Enter the third number : ");
    scanf("%d", &third);

    if (first > second && first > third){
        printf("First(%d) number is greater ",first);
    }
    else if (second > first && second > third){
        printf("Second(%d) number is greater ",second);
    }
    else{
        printf("Third(%d) number is greater ",third);
    }
    return 0;
}