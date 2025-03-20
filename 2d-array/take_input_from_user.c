#include<stdio.h>



int main(){
    int r,c;
    
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

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}