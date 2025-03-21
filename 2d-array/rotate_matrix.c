#include <stdio.h>

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n =3;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
       int j=0,k=n-1;

       while(j<k){

        int temp =  arr[i][j];
        arr[i][j] = arr[i][k];
        arr[i][k] = temp;
        j++;
        k--;
       }
        
    }
    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


    
    return 0;
}