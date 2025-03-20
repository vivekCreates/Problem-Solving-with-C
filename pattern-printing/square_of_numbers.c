#include <stdio.h>


int main(){
    int n;
    printf("Enter the rows: ");
    scanf("%d",&n);
    int m;
    printf("Enter the cols: ");
    scanf("%d",&m);

    for(int row=1; row<=n;row++){
        for(int col=1; col<=m;col++){
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}