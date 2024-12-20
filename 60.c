// 60.WAP to use different storage classes of a variable.

#include <stdio.h>
void func(){
    static int x = 0; // Static
    x++;
    printf("%d ", x);
}
int main(){
    func();
    func();
    func();
    return 0;
}
