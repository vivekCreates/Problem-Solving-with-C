#include<stdio.h>


int main(){

    int r,c;
    int r1,c1,r2,c2;
    printf("Enter the row: ");
    scanf("%d",&r);
    
    printf("Enter the column: ");
    scanf("%d",&c);
    
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
            for (int j = 0; j < c; j++)
            {
                scanf("%d",&arr[i][j]);
            }
            
        
    }
    printf("Matrix: \n");
    for (int i = 0; i < r; i++)
    {
            for (int j = 0; j < c; j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        
    }

    printf("Enter the (r1,c1): ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the (r2,c2): ");
    scanf("%d %d",&r2,&c2);
    for (int i = r1; i < r2; i++)
    {
        for (int j = c1; j < c2; j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}