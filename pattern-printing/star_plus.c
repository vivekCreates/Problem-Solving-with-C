#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    if (n%2==0){
        printf("Error: Please Enter the odd number\n");
        return 0;
    }
    int mid = (n/2) + 1;
    for (int i = 1; i <=n;i++)
    {
        for (int j = 1; j <=n; j++)
        {
            j == mid || i ==mid 
            ? printf(" * ") 
            : printf("   ");
        }
        printf("\n");
    }
    return 0;
}