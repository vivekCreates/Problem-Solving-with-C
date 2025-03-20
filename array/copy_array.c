#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int brr[5];
    int r = 4;

    for ( int i = 0; i < 5; i++)
    {
        brr[i] = arr[r];
        r--;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("arr: %d\n",arr[i]);
        printf("brr: %d\n",brr[i]);
    }
    
    return 0;
}