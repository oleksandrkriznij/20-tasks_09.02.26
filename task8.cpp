#include <stdio.h>

struct Product {
    char name[100];
    float price;
};

int main() {
    struct Product p1, p2;

    printf("Product 1 - name: ");
    fgets(p1.name, sizeof(p1.name), stdin);

    printf("Product 1 - price: ");
    scanf("%f", &p1.price);
    getchar();

    printf("Product 2 - name: ");
    fgets(p2.name, sizeof(p2.name), stdin);

    printf("Product 2 - price: ");
    scanf("%f", &p2.price);

    for (int i = 0; p1.name[i]; i++) {
        if (p1.name[i] == '\n') {
            p1.name[i] = '\0';
            break;
        }
    }

    for (int i = 0; p2.name[i]; i++) {
        if (p2.name[i] == '\n') {
            p2.name[i] = '\0';
            break;
        }
    }

    if (p1.price > p2.price) {
        printf("%s is more expensive\n", p1.name);
    } else if (p2.price > p1.price) {
        printf("%s is more expensive\n", p2.name);
    } else {
        printf("Both products have the same price\n");
    }

    return 0;
}

