#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

int& back(int_vector* v) {
    return v->data[v->size - 1];
}

int main() {
    int_vector v = {new int[3]{1, 2, 3}, 3, 3};
    std::cout << "Back: " << back(&v) << std::endl;
    delete[] v.data;
    return 0;
}
