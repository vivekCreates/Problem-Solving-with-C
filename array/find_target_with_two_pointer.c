#include<stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    int target = 8;
    int i=0,j=7;
    while (i<j)
    {
       if (arr[i]+arr[j]==target)
       {
        printf("Element found:(%d,%d)\n",arr[i],arr[j]);
        break;
    }
       else if(arr[i]+arr[j]>target) j--;
       else i++;

       
    }
    
    return 0;
}