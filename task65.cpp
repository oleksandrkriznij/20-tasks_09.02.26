#include <iostream>

int climb_stairs(int n) {
    if (n <= 1) return 1;
    return climb_stairs(n - 1) + climb_stairs(n - 2);
}

int main() {
    std::cout << "Ways for 5 stairs: " << climb_stairs(5) << std::endl; // 8
    return 0;
}
