#include <stdio.h>

int reverse_maze(int row, int col)
{
    int rightWays = 0, downWays = 0;
    if (row == 1 && col == 1)
        return 1;
    if (col > 1)
        rightWays += reverse_maze(row, col - 1);
    if (row > 1)
        downWays += reverse_maze(row - 1, col);
    int ways = rightWays + downWays;
    return ways;
}

int main()
{
    int row, col;
    printf("Enter the row: ");
    scanf("%d", &row);
    printf("Enter the col: ");
    scanf("%d", &col);
    int ways = reverse_maze(row, col);
    printf("ways: %d\n", ways);
    return 0;
}