#include <iostream>

int digit_sum(int n) {
    if (n == 0) return 0;
    return (n % 10) + digit_sum(n / 10);
}

int main() {
    std::cout << "Sum of digits (1234): " << digit_sum(1234) << std::endl; // 10
    return 0;
}
