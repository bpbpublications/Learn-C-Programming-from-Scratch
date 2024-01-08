#include <stdio.h>
int main () {
    int category, item;
    printf("Enter category (1-3): ");
    scanf ("%d", &category);
    printf("Enter item (1-3): ");
    scanf ("%d", &item);
    switch (category) {
        case 1:
            switch (item) {
                case 1:
                    printf("Category 1, Item 1 selected\n");
                    break;
                case 2:
                    printf("Category 1, Item 2 selected\n");
                    break;
                case 3:
                    printf("Category 1, Item 3 selected\n");
                    break;
                default:
                    printf("Invalid item\n");
            }
            break;
        case 2:
            switch (item) {
                case 1:
                    printf("Category 2, Item 1 selected\n");
                    break;
                case 2:
                    printf("Category 2, Item 2 selected\n");
                    break;
                case 3:
                    printf("Category 2, Item 3 selected\n");
                    break;
                default:
                    printf("Invalid item\n");
            }
            break;
        case 3:
            switch (item) {
                case 1:
                    printf("Category 3, Item 1 selected\n");
                    break;
                case 2:
                    printf("Category 3, Item 2 selected\n");
                    break;
                case 3:
                    printf("Category 3, Item 3 selected\n");
                    break;
                default:
                    printf("Invalid item\n");
            }
            break;
        default:
            printf("Invalid category\n");
    }
return (0);
}
