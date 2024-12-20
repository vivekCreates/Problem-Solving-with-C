// 25.WAP to find the grade of student using else-if ladder.
#include <stdio.h>
#include <conio.h>
int main()
{
    int marks;
    printf("Enter the marks : ");
    scanf("%d", &marks);
    if (marks > 90){
        printf("A+ grade");
    }
    else if (marks >= 70 && marks <= 80){
        printf("A grade");
    }
    else if (marks >= 60 && marks <= 70){
        printf("B grade");
    }
    else if (marks >= 50 && marks <= 60){
        printf("C grade");
    }
    else if (marks >= 40 && marks <= 50){
        printf("D grade");
    }
    else {
        printf("E grade"); }
    return 0;
}