// 34.WAP to check a no is Armstrong or not.
#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, rem, res = 0, power = 0;
    scanf("%d", &num);
    printf("Enter the number: ");
    temp = num;
    while (temp > 0){
        temp = temp / 10;
        power++;
    }
    temp = num;
    while (temp > 0){
        rem = temp % 10;           
        res += pow(rem, power);    
        temp = temp / 10;          
    }
    if (res == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
