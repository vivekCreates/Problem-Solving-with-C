// 37.WAP to find the factorial of a no. entered by the user.
#include <stdio.h>
#include <conio.h>

int main(){
    int num,fact=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    for (int i = num; i > 0; i--)
    {
       fact*= i;
    }
    printf("Factorial of %d = %d ",num,fact);
    return 0;
}