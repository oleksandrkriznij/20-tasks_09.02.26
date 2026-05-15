#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

bool equals(int_vector& a, int_vector& b) {
    if (a.size != b.size) return false;
    for (int i = 0; i < a.size; i++) {
        if (a.data[i] != b.data[i]) return false;
    }
    return true;
}

int main() {
    int_vector v1 = {new int[2]{1, 2}, 2, 2};
    int_vector v2 = {new int[2]{1, 2}, 2, 2};
    std::cout << "Equal: " << std::boolalpha << equals(v1, v2) << std::endl;
    delete[] v1.data; delete[] v2.data;
    return 0;
}
