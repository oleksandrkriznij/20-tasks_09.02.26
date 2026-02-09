#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int main() {
    struct Time t1, t2;
    int total1, total2, difference;

    printf("Time 1 - hours: ");
    scanf("%d", &t1.hours);

    printf("Time 1 - minutes: ");
    scanf("%d", &t1.minutes);

    printf("Time 1 - seconds: ");
    scanf("%d", &t1.seconds);

    printf("Time 2 - hours: ");
    scanf("%d", &t2.hours);

    printf("Time 2 - minutes: ");
    scanf("%d", &t2.minutes);

    printf("Time 2 - seconds: ");
    scanf("%d", &t2.seconds);

    total1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    total2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    difference = total2 - total1;

    printf("Difference: %d seconds\n", difference);

    return 0;
}

