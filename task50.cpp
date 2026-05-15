#include <iostream>

template<typename T>
void my_swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    my_swap(x, y);
    std::cout << "x: " << x << ", y: " << y << std::endl; // 10, 5

    double a = 3.14, b = 2.71;
    my_swap(a, b);
    std::cout << "a: " << a << ", b: " << b << std::endl; // 2.71, 3.14
    return 0;
}
