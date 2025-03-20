#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for (int i = n; i>0; i--)
    {
        for (int j = i-1; j>0; j--)
        {
            printf("  ");
        }
        int a = 65;
        for (int k = i; k <=n; k++)
        {
            printf(" %c", (char)(k-i)+a);
            
        }
        
        printf("\n");
    }
    

    return 0;
}