// 14.WAP to calculate the simple interest.(principal, rate and time be entered by the user). 
#include <stdio.h>
#include <conio.h>

int main()
{
    float PA, R, T, Si;

    printf("Enter the principle amout :");
    scanf("%f", &PA);

    printf("Enter the rate of interest : ");
    scanf("%f", &R);

    printf("Enter the time period in year : ");
    scanf("%f", &T);

    Si = (PA * R * T) / 100;
    printf("Simple interest = %.2f", Si);
    return 0;
}
