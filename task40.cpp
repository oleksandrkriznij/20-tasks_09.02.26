#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

void remove_all(int_vector* v, int value) {
    int write_idx = 0;
    for (int i = 0; i < v->size; i++) {
        if (v->data[i] != value) {
            v->data[write_idx++] = v->data[i];
        }
    }
    v->size = write_idx;
}

int main() {
    int_vector v = {new int[6]{1, 2, 3, 2, 4, 2}, 6, 6};
    remove_all(&v, 2);
    for (int i = 0; i < v.size; i++) std::cout << v.data[i] << " ";
    std::cout << std::endl;
    delete[] v.data;
    return 0;
}
