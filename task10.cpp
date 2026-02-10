#include <stdio.h>

struct Rectangle {
    float width;
    float height;
};

int main() {
    struct Rectangle r1, r2;
    float area1, area2;

    printf("Rectangle 1 - width: ");
    scanf("%f", &r1.width);

    printf("Rectangle 1 - height: ");
    scanf("%f", &r1.height);

    printf("Rectangle 2 - width: ");
    scanf("%f", &r2.width);

    printf("Rectangle 2 - height: ");
    scanf("%f", &r2.height);

    area1 = r1.width * r1.height;
    area2 = r2.width * r2.height;

    if (area1 > area2) {
        printf("Rectangle 1 is larger (area: %.2f)\n", area1);
    } else if (area2 > area1) {
        printf("Rectangle 2 is larger (area: %.2f)\n", area2);
    } else {
        printf("Both rectangles have the same area (%.2f)\n", area1);
    }

    return 0;
}

