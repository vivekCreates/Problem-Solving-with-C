// 27.WAP to demonstrate the use of nested switch.
#include <stdio.h>
#include <conio.h>
int main() {
    int category, item;
    printf("Choose a category:\n1. Fruits\n2. Vegetables\n");
    scanf("%d", &category);
    switch (category) {
        case 1:
            printf("Choose a fruit:\n1. Apple\n2. Banana\n");
            scanf("%d", &item);
            switch (item) {
                case 1: printf("You selected Apple.\n"); break;
                case 2: printf("You selected Banana.\n"); break;
                default: printf("Invalid fruit selection.\n");
            }
            break;
        case 2:
            printf("Choose a vegetable:\n1. Carrot\n2. Potato\n");
            scanf("%d", &item);
            switch (item) {
                case 1: printf("You selected Carrot.\n"); break;
                case 2: printf("You selected Potato.\n"); break;
                default: printf("Invalid vegetable selection.\n");
            }
            break;
        default:
            printf("Invalid category selection.\n");
    }
    return 0;
}
