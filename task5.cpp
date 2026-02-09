#include <stdio.h>

struct Rectangle {
    float width;
    float height;
};

int main() {
    struct Rectangle r;
    float area, perimeter;

    printf("Enter width: ");
    scanf("%f", &r.width);

    printf("Enter height: ");
    scanf("%f", &r.height);

    area = r.width * r.height;
    perimeter = 2 * (r.width + r.height);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}

