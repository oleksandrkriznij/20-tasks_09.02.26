#include <iostream>

double fast_power(double x, int n) {
    if (n == 0) return 1.0;
    if (n % 2 == 0) {
        double half = fast_power(x, n / 2);
        return half * half;
    } else {
        return x * fast_power(x, n - 1);
    }
}

int main() {
    std::cout << "Fast power 2^10: " << fast_power(2.0, 10) << std::endl;
    return 0;
}
