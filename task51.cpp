#include <iostream>

double power(double x, int n) {
    if (n == 0) return 1.0; // Базовий випадок
    return x * power(x, n - 1);
}

int main() {
    std::cout << "2.0^10 = " << power(2.0, 10) << std::endl; // 1024
    return 0;
}
