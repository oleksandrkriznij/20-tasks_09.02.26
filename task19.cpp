#include <stdio.h>

struct Point {
    float x;
    float y;
};

struct Rectangle {
    struct Point bottomLeft;
    struct Point topRight;
};

int main() {
    struct Rectangle rect;
    float width, height, area;

    printf("Bottom-left - x: ");
    scanf("%f", &rect.bottomLeft.x);

    printf("Bottom-left - y: ");
    scanf("%f", &rect.bottomLeft.y);

    printf("Top-right - x: ");
    scanf("%f", &rect.topRight.x);

    printf("Top-right - y: ");
    scanf("%f", &rect.topRight.y);

    width = rect.topRight.x - rect.bottomLeft.x;
    height = rect.topRight.y - rect.bottomLeft.y;

    area = width * height;

    printf("\nArea: %.2f\n", area);

    return 0;
}

