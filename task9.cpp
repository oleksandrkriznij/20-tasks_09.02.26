#include <stdio.h>

struct Complex {
    int real;
    int imag;
};

int main() {
    struct Complex c1, c2, sum;

    printf("Complex 1 - real: ");
    scanf("%d", &c1.real);

    printf("Complex 1 - imag: ");
    scanf("%d", &c1.imag);

    printf("Complex 2 - real: ");
    scanf("%d", &c2.real);

    printf("Complex 2 - imag: ");
    scanf("%d", &c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    printf("Sum: %d + %di\n", sum.real, sum.imag);

    return 0;
}

