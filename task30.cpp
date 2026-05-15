#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

int find(int_vector* v, int value) {
    for (int i = 0; i < v->size; i++) {
        if (v->data[i] == value) return i;
    }
    return -1;
}

int main() {
    int_vector v = {new int[4]{10, 20, 30, 40}, 4, 4};
    std::cout << "Index: " << find(&v, 30) << std::endl;
    delete[] v.data;
    return 0;
}
