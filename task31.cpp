#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

int count(int_vector* v, int value) {
    int c = 0;
    for (int i = 0; i < v->size; i++) {
        if (v->data[i] == value) c++;
    }
    return c;
}

int main() {
    int_vector v = {new int[5]{1, 2, 1, 3, 1}, 5, 5};
    std::cout << "Count of 1: " << count(&v, 1) << std::endl;
    delete[] v.data;
    return 0;
}
