#include<stdio.h>

void print_number_to_n(int n){
    if (n==0) return ;        //base case
    printf("%d\n",n);        // code 
    print_number_to_n(n-1); // recursive call
    return;
    
    
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    print_number_to_n(n);
    return 0;
}