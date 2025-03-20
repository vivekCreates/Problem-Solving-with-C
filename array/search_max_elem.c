#include<stdio.h>


int main(){
    int nums[10]= {21,23,67,99,105,3,245,43,53,55};
    int max = 0;

    for (int i = 0; i < 10; i++)
     {   nums[i] > max 
                    ? max = nums[i]
                    : max;
    }
    printf("Max element: %d\n",max);
    return 0;
}