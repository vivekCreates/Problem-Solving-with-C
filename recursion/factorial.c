#include<stdio.h>

int fact(int n){
    if (n==1 || n==0) return 1 ;
    return n*fact(n-1);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    int result = fact(n);
    printf("Factoral of %d: %d\n",n,result);

    return 0;
}