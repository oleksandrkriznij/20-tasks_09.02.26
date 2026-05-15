#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

void insert(int_vector* v, int index, int value) {
    for (int i = v->size; i > index; i--) {
        v->data[i] = v->data[i - 1];
    }
    v->data[index] = value;
    v->size++;
}

int main() {
    int_vector v = {new int[5]{1, 2, 3}, 3, 5};
    insert(&v, 1, 99);
    for (int i = 0; i < v.size; i++) std::cout << v.data[i] << " ";
    std::cout << std::endl;
    delete[] v.data;
    return 0;
}
