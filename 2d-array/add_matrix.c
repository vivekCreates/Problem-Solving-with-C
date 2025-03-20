#include<stdio.h>


int main(){
   int r,c;
   printf("Enter the number of rows: ");
   scanf("%d",&r);

   printf("Enter the number of colums: ");
   scanf("%d",&c);
    int a[r][c];
    int b[r][c];
    int sum[r][c];
    
    printf("Enter the elements of a matrix: ");
    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
        scanf("%d",&a[i][j]);
       }
       
    }
    printf("Enter the elements of b matrix: ");
    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
        scanf("%d",&b[i][j]);
       }
       
    }

    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
        sum[i][j] = a[i][j] + b[i][j];
       }
       
    }

    printf("sum: \n");
    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
        printf("%d ",sum[i][j]);
       }
       printf("\n");
    }
    

    return 0;
}
