#include<stdio.h>

int maze(int curr_row,int curr_col,int end_row,int end_col) {
    int rightWays = 0;
    int downWays = 0;
    if (curr_col<end_col)
        rightWays += maze(curr_row,curr_col+1,end_row,end_col);  
    if (curr_row<end_row)
        downWays += maze(curr_row+1,curr_col,end_row,end_col);
    if (curr_row==end_row&& curr_col==end_col)
        return 1;

    int ways = rightWays + downWays;
    return ways;
    
}

int main(){
    int r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);

    int ways = maze(1,1,r,c);
    printf("ways: %d\n",ways);
    return 0;
}