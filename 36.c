// 36.WAP to print the table of any no. entered by the user.
#include <stdio.h>
#include <conio.h>

int main(){
    int num;
    // clrscr();
    printf("Enter the number : ");
    scanf("%d",&num);

    for (int i = 1; i <=10; i++){
       printf("\n%d X %d = %d",num,i,num*i);
    }
    // getch();
    return 0;
}