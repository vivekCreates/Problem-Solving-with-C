#include <stdio.h>

int main(){

    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        for (int j = i; j <= n-1; j++)
        {
           printf(" ");
        }
        for (int k = 1; k <=2*i-1; k++)
        {
            printf("%c",(char)k+64);
        }
        printf(" \n");
    }
    return 0;
}