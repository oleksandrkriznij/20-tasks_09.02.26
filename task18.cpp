#include <stdio.h>

struct Product {
    char name[100];
    float price;
};

struct Order {
    struct Product product;
    int quantity;
};

int main() {
    struct Order order;
    float total;

    printf("Product name: ");
    scanf("%s", order.product.name);

    printf("Product price: ");
    scanf("%f", &order.product.price);

    printf("Order quantity: ");
    scanf("%d", &order.quantity);

    total = order.product.price * order.quantity;

    printf("\nOrder total: %.2f UAH\n", total);

    return 0;
}

