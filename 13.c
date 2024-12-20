// 13.WAP to understand the concept of formatted I/O functions(printf() and scanf()) to input and display different type values in different formats.

#include <stdio.h>
#include <conio.h>

int main()
{
    char name[20];
    int age;
    printf("Enter Your name : ");
    scanf("%s",&name);
    printf("Enter Your age : ");
    scanf("%d",&age);

    printf("Hello, %s and your age is %d ",name,age);
    return 0;
}