#include <iostream>

int digit_count(int n) {
    if (n < 10) return 1;
    return 1 + digit_count(n / 10);
}

int main() {
    std::cout << "Digit count (1234): " << digit_count(1234) << std::endl; // 4
    std::cout << "Digit count (7): " << digit_count(7) << std::endl;       // 1
    return 0;
}
