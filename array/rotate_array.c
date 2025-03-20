#include<stdio.h>


void reverse_array(int arr[],int si, int ei){
    int temp;
    for (int i=si,j=ei; i <=j; i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int k;
    printf("Enter the steps to rotate the array: ");
    scanf("%d",&k);

    k = k>10 ? k%10 : k;
    reverse_array(arr,0,9);
    reverse_array(arr,0,k-1);
    reverse_array(arr,k,9);

    for (int i = 0; i < 10; i++)
    {
       printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}