// 30.WAP to print the sum of first n numbers
#include <stdio.h>
#include <conio.h>

int main(){
    int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    printf("Sum : %d",sum);
    return 0;
    
}