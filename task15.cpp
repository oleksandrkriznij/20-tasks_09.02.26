#include <stdio.h>

#define N 3

struct Product {
    char name[100];
    float price;
};

int main() {
    struct Product products[N];
    int minIndex = 0;

    for (int i = 0; i < N; i++) {
        printf("Product %d - name: ", i + 1);
        scanf("%s", products[i].name);

        printf("Product %d - price: ", i + 1);
        scanf("%f", &products[i].price);
    }

    for (int i = 1; i < N; i++) {
        if (products[i].price < products[minIndex].price) {
            minIndex = i;
        }
    }

    printf("\nCheapest: %s (%.2f UAH)\n",
           products[minIndex].name,
           products[minIndex].price);

    return 0;
}

