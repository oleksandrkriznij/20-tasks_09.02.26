#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

int find_max(int_vector& v) {
    if (v.size == 0) return 0;
    int mx = v.data[0];
    for (int i = 1; i < v.size; i++) {
        if (v.data[i] > mx) mx = v.data[i];
    }
    return mx;
}

int main() {
    int n;
    std::cout << "Size n: "; std::cin >> n;
    int_vector v = {new int[n], n, n};
    for (int i = 0; i < n; i++) std::cin >> v.data[i];
    std::cout << "Max: " << find_max(v) << std::endl;
    delete[] v.data;
    return 0;
}
