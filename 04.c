// WAP to understand the concept of different types of variable declearations and initailization.
#include <stdio.h>

int main()
{
    char name[10] = "vivek";
    int weight = 45;
    float height = 5.6;

    printf("name : %s\n", name);
    printf("weight : %d\n", weight);
    printf("height : %.1f\n", height);
    return 0;
}