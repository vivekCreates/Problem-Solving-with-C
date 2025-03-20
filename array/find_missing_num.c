#include<stdio.h>


int main(){

    int nums[10] = {1,2,3,4,5,6,8,9,10};
    int sum_of_nums = 10/2*(2*1+(10-1)*1);
    int sum = 0,missing;

    for (int i = 0; i < 9; i++)
    {
      sum+= nums[i];
    }
    missing = sum_of_nums - sum;
    printf("Missing num: %d\n",missing);

    return 0;
}