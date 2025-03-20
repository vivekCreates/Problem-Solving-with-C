#include <stdio.h>

int power_log(int a, int b)
{   if (b == 0 ) return 1;
    int x =  power_log(a, b / 2);
    return b%2==0 ? x*x : x*x*a;       
     
}

int main()
{
    int a;
    int b;

    printf("Enter base: ");
    scanf("%d", &a);

    printf("Enter power: ");
    scanf("%d", &b);

    int ans = power_log(a, b);
    printf("ans = %d\n", ans);
    return 0;
}
