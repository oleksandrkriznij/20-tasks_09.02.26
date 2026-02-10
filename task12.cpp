#include <stdio.h>

struct Student {
    char name[50];
    int grade;
};

int main() {
    struct Student students[3];
    int bestIndex = 0;

    for (int i = 0; i < 3; i++) {
        printf("Student %d - name: ", i + 1);
        scanf("%s", students[i].name);

        printf("Student %d - grade: ", i + 1);
        scanf("%d", &students[i].grade);

        if (students[i].grade > students[bestIndex].grade) {
            bestIndex = i;
        }
    }

    printf("\nBest student: %s (%d)\n",
           students[bestIndex].name,
           students[bestIndex].grade);

    return 0;
}

