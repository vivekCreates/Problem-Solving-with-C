// 15.WAP to calculate the average marks and percentage of a student in 5 subjects. (marks be entered by the user)
#include <stdio.h>
#include <conio.h>

int main()
{
    int phy, chem, bio, maths, eng;
    float avg, per, total;
    // clrscr();
    printf("Enter the marks of physics : ");
    scanf("%d", &phy);
    printf("Enter the marks of chemistry : ");
    scanf("%d", &chem);
    printf("Enter the marks of biology : ");
    scanf("%d", &bio);
    printf("Enter the marks of Maths : ");
    scanf("%d", &maths);
    printf("Enter the marks of English : ");
    scanf("%d", &eng);
    total = phy + chem + bio + maths + eng;
    avg = total / 5;
    per = (total / 500) * 100;

    printf("average = %.2f\n", avg);
    printf("percentage = %.2f\n", per);
    return 0;
}