#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Time {
    int hours;
    int minutes;
};

struct Event {
    char name[100];
    struct Date date;
    struct Time time;
};

int main() {
    struct Event event;

    printf("Event name: ");
    scanf("%s", event.name);

    printf("Date - day: ");
    scanf("%d", &event.date.day);

    printf("Date - month: ");
    scanf("%d", &event.date.month);

    printf("Date - year: ");
    scanf("%d", &event.date.year);

    printf("Time - hours: ");
    scanf("%d", &event.time.hours);

    printf("Time - minutes: ");
    scanf("%d", &event.time.minutes);

    printf("\nEvent: %s\n", event.name);
    printf("When: %02d.%02d.%d at %02d:%02d\n",
           event.date.day,
           event.date.month,
           event.date.year,
           event.time.hours,
           event.time.minutes);

    return 0;
}

