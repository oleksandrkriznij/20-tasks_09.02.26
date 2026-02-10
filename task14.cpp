#include <stdio.h>

#define N 3

struct Product {
    char name[100];
    float price;
    int quantity;
};

int main() {
    struct Product products[N];
    float total = 0;

    for (int i = 0; i < N; i++) {
        printf("Product %d - name: ", i + 1);
        scanf("%s", products[i].name);

        printf("Product %d - price: ", i + 1);
        scanf("%f", &products[i].price);

        printf("Product %d - quantity: ", i + 1);
        scanf("%d", &products[i].quantity);

        total += products[i].price * products[i].quantity;
    }

    printf("\nTotal warehouse value: %.2f UAH\n", total);

    return 0;
}

