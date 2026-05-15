#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

void unique(int_vector* v) {
    if (v->size == 0) return;
    int j = 0;
    for (int i = 1; i < v->size; i++) {
        if (v->data[i] != v->data[j]) {
            j++;
            v->data[j] = v->data[i];
        }
    }
    v->size = j + 1;
}

int main() {
    int_vector v = {new int[7]{1, 1, 2, 2, 2, 3, 1}, 7, 7};
    unique(&v);
    for (int i = 0; i < v.size; i++) std::cout << v.data[i] << " ";
    std::cout << std::endl;
    delete[] v.data;
    return 0;
}
