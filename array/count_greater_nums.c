#include<stdio.h>


int main(){
    int nums[10] = {21,34,13,14,56,43,56,23,46,21};
    int match,count=0;
    printf("Enter the number: ");
    scanf("%d",&match);
    
    for (int i = 0; i < 10; i++)
    {
      if (nums[i]>match)
        count++;
    }
    

    printf("count: %d\n",count);
    return 0;
}