#include <stdio.h>

int main(){

    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);

    for (int i = n; i>0; i--)
    {
        for (int j = i-1; j>0; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <=n; k++)
        {
            printf("* ");
        }
        
        printf("\n");
        
    }
    
    return 0;
}