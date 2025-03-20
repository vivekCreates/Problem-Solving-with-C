#include<stdio.h>


int main(){

    int arr[5];

    for ( int i = 0; i < 5; i++)
    {
        printf("Enter marks of %d student: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The Roll no of students who have marks less than 35: ");
    for (int i=0; i < 5; i++)
    {
        if (arr[i]<35)
            printf("%d",i);     
    }
    return 0;
}