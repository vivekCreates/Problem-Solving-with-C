// 28.WAP to print the numbers between 1 to n using while loop.

#include <stdio.h>
#include <conio.h>

int main(){
    int n,i=1;
    printf("Enter the number : ");
    scanf("%d",&n);

    while (i<=n)
    {
    printf("\n%d",i);
    i++;
    }
    return 0;
}