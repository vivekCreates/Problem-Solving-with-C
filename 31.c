//  31.WAP to print the sum of any n numbers.
#include <stdio.h>
#include <conio.h>

int main(){
    int i,n,num,sum=0;
    printf("Enter the times of numbers to be sum : ");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        printf("Enter the number : ");
        scanf("%d",&num);
        sum+=num;
    }
    printf("Sum : %d",sum);
    return 0;
}