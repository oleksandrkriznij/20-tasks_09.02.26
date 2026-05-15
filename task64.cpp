#include <iostream>

long long cache[100][100];

long long count_paths(int m, int n) {
    if (m == 1 || n == 1) return 1;
    if (cache[m][n] != 0) return cache[m][n];
    
    cache[m][n] = count_paths(m - 1, n) + count_paths(m, n - 1);
    return cache[m][n];
}

int main() {
    std::cout << "Paths in 3x3: " << count_paths(3, 3) << std::endl; // 6
    return 0;
}
