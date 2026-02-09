#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    int year;
};

int main() {
    struct Book book;

    printf("Enter title: ");
    fgets(book.title, sizeof(book.title), stdin);

    printf("Enter author: ");
    fgets(book.author, sizeof(book.author), stdin);

    printf("Enter year: ");
    scanf("%d", &book.year);

    for (int i = 0; book.title[i]; i++) {
        if (book.title[i] == '\n') {
            book.title[i] = '\0';
            break;
        }
    }

    for (int i = 0; book.author[i]; i++) {
        if (book.author[i] == '\n') {
            book.author[i] = '\0';
            break;
        }
    }

    printf("\"%s\" by %s (%d)\n", book.title, book.author, book.year);

    return 0;
}

