#include <stdio.h>

struct Product {
    char name[100];
    float price;
    int quantity;
};

int main() {
    struct Product product;
    float total;

    printf("Enter name: ");
    fgets(product.name, sizeof(product.name), stdin);

    printf("Enter price: ");
    scanf("%f", &product.price);

    printf("Enter quantity: ");
    scanf("%d", &product.quantity);

    for (int i = 0; product.name[i]; i++) {
        if (product.name[i] == '\n') {
            product.name[i] = '\0';
            break;
        }
    }

    total = product.price * product.quantity;

    printf("Total: %.2f UAH\n", total);

    return 0;
}
