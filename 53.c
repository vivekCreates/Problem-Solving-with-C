// 53.WAP to show the working of Call by Value.

#include <stdio.h>
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x = 5, y = 10;
    swap(x, y);
    printf("value of x is = %d ",x);
    printf("\nvalue of y is = %d ",y);
    return 0;
}
