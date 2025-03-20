#include<stdio.h>


int main(){
    int even_nums_sum=0,odd_nums_sum=0;

    int nums[10] = {21,34,13,55,32,76,45,80,22,15};

    for (int i = 0; i < 10; i++)
    {
        if (i%2==0)
            even_nums_sum += nums[i];
         else
            odd_nums_sum += nums[i];    
    }
    printf("sum_of_even_indices: %d",even_nums_sum);
    printf("\nodd_of_even_indices: %d\n ",odd_nums_sum);
    return 0;
}