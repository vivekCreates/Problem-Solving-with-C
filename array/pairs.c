#include<stdio.h>


int main(){

    int nums[10] = {1,2,3,4,5,6,7,8,9,10};
    int count=0,target_sum;
    printf("Enter the target: ");
    scanf("%d",&target_sum);
   
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (nums[i]+nums[j]==target_sum && i!=j)
           { 
            printf("(%d %d)",nums[i],nums[j]);
                count++;
            }
        }
        
    }
    
    printf("count: %d\n",count);
    return 0;
}