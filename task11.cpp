#include <stdio.h>

#define N 3

struct Student {
    char name[100];
    int grade;
};

int main() {
    struct Student students[N];

    for (int i = 0; i < N; i++) {
        printf("Student %d - name: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);

        for (int j = 0; students[i].name[j]; j++) {
            if (students[i].name[j] == '\n') {
                students[i].name[j] = '\0';
                break;
            }
        }

        printf("Student %d - grade: ", i + 1);
        scanf("%d", &students[i].grade);
        getchar();
    }

    printf("\nResults:\n");
    for (int i = 0; i < N; i++) {
        printf("%d. %s - %d\n", i + 1, students[i].name, students[i].grade);
    }

    return 0;
}

