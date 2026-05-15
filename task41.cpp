#include <iostream>

template<typename T>
T my_min(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    std::cout << "Min of 5, 3: " << my_min(5, 3) << std::endl;
    std::cout << "Min of 2.5, 8.1: " << my_min(2.5, 8.1) << std::endl;
    std::cout << "Min of 'a', 'z': " << my_min('a', 'z') << std::endl;
    return 0;
}
