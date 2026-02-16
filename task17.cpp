#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

struct Segment {
    struct Point start;
    struct Point end;
};

int main() {
    struct Segment segment;
    float length;

    printf("Start point - x: ");
    scanf("%f", &segment.start.x);

    printf("Start point - y: ");
    scanf("%f", &segment.start.y);

    printf("End point - x: ");
    scanf("%f", &segment.end.x);

    printf("End point - y: ");
    scanf("%f", &segment.end.y);

    length = sqrt(
        pow(segment.end.x - segment.start.x, 2) +
        pow(segment.end.y - segment.start.y, 2)
    );

    printf("\nSegment length: %.2f\n", length);

    return 0;
}

