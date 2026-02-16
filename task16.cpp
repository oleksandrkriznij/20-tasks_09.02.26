#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[100];
    struct Date birthDate;
};

int main() {
    struct Student student;

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter day: ");
    scanf("%d", &student.birthDate.day);

    printf("Enter month: ");
    scanf("%d", &student.birthDate.month);

    printf("Enter year: ");
    scanf("%d", &student.birthDate.year);

    printf("\n%s was born on %02d.%02d.%d\n",
           student.name,
           student.birthDate.day,
           student.birthDate.month,
           student.birthDate.year);

    return 0;
}

