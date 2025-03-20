#include <stdio.h>

int main()
{
    int r;
    int const subjects = 3;
    printf("Enter the number of students: ");
    scanf("%d",&r);
    int marks[r][subjects];


    for (int i = 0; i < r; i++)
    {   
        printf("Enter row:");
        for (int j = 0; j <= subjects ; j++)
        {
            printf("Enter marks: ");
            scanf("%d",&marks[i][j]);
        }
        
    }
    printf("R.no  Phy Chem Math\n");

    for (int i = 0; i < r; i++)
    {
        
        for (int j = 0; j <= subjects; j++)
        {
            printf("%d    ",marks[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}