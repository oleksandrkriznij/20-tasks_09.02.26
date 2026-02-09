#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point p1, p2;
    float distance;

    printf("Point 1 - Enter x: ");
    scanf("%f", &p1.x);

    printf("Point 1 - Enter y: ");
    scanf("%f", &p1.y);

    printf("Point 2 - Enter x: ");
    scanf("%f", &p2.x);

    printf("Point 2 - Enter y: ");
    scanf("%f", &p2.y);

    distance = sqrt(
        (p2.x - p1.x) * (p2.x - p1.x) +
        (p2.y - p1.y) * (p2.y - p1.y)
    );

    printf("Distance: %.2f\n", distance);

    return 0;
}

