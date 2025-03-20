#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            i % 2 ==0 
            ? printf("%c ",(char)j+64)
            : printf("%d ",j);
        }
        printf("\n");
    }
}