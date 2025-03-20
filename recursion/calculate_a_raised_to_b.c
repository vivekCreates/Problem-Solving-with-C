#include<stdio.h>

// a^3 = a x a x a;


int power(int a,int b){

    if (b==0) return 1;
    return a * power(a,b-1);
    
}



int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);

    int b;
    printf("Enter b: ");
    scanf("%d",&b);

    int result = power(a,b);
    printf("%d^%d is %d\n ",a,b,result);

    return 0;
}