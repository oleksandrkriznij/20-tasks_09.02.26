#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

void concat(int_vector& dst, int_vector& src) {
    for (int i = 0; i < src.size; i++) {
        dst.data[dst.size++] = src.data[i];
    }
}

int main() {
    int_vector v1 = {new int[10]{1, 2}, 2, 10};
    int_vector v2 = {new int[3]{3, 4, 5}, 3, 3};
    concat(v1, v2);
    for (int i = 0; i < v1.size; i++) std::cout << v1.data[i] << " ";
    std::cout << std::endl;
    delete[] v1.data;
    delete[] v2.data;
    return 0;
}
