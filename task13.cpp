#include <stdio.h>

#define N 3

struct Student {
    char name[100];
    int grade;
};

int main() {
    struct Student students[N];
    float sum = 0;
    float average;

    for (int i = 0; i < N; i++) {
        printf("Student %d - name: ", i + 1);
        scanf("%s", students[i].name);

        printf("Student %d - grade: ", i + 1);
        scanf("%d", &students[i].grade);

        sum += students[i].grade;
    }

    average = sum / N;

    printf("\nAverage grade: %.2f\n", average);

    return 0;
}

