

#include<stdio.h>
#include<limits.h>

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    printf("Before sorting: ");
    for (int i = 0; i < n; i++)
    {
       printf("%d ",arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n-1; i++)
    {
        int max = INT_MIN;
        int idx;
        for (int j = i ; j < n; j++)
        {
            if (arr[j]>max)
            {
                max = arr[j];
                idx = j;
            }
            
        }
        int temp = arr[i];
        arr[i] = arr[idx];
        arr[idx]= temp;
    }
    


    printf("After sorting: ");
    for (int i = 0; i < n; i++)
    {
       printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}