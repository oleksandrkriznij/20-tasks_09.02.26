#include <iostream>

void print_binary(int n) {
    if (n > 1) print_binary(n / 2);
    std::cout << n % 2;
}

int main() {
    std::cout << "Binary of 13: ";
    print_binary(13); // 1101
    std::cout << std::endl;
    return 0;
}
