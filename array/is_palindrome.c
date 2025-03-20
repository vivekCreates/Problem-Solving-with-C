#include <stdio.h>

void is_palindrome(int arr[])
{

    int i = 0, j = 4, temp;
    int palindrome = 0;

    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            palindrome = 0;
            break;
        }
        else
        {
            palindrome = 1;
        }
        i++;
        j--;
    }
    palindrome == 0 ? printf("False\n") : printf("True\n");
}

int main()
{
    int arr[5] = {1, 2, 1};
    is_palindrome(arr);
    return 0;
}