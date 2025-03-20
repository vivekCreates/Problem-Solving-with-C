#include<stdio.h>


int main(){
    int nums[10] = {1,2,3,4,5,6,7,8,9,10};
    int max = nums[0];
    int smax = 0;
    for (int i = 0; i < 10; i++)
    {
       if (nums[i]>max)
       {
        smax = max;
        max= nums[i];
       }
       
    }
    
    printf("second largest num: %d\n",smax);
    return 0;
}