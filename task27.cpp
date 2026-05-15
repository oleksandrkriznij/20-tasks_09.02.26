#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

void erase(int_vector* v, int index) {
    for (int i = index; i < v->size - 1; i++) {
        v->data[i] = v->data[i + 1];
    }
    v->size--;
}

int main() {
    int_vector v = {new int[4]{10, 20, 30, 40}, 4, 4};
    erase(&v, 1);
    for (int i = 0; i < v.size; i++) std::cout << v.data[i] << " ";
    std::cout << std::endl;
    delete[] v.data;
    return 0;
}
