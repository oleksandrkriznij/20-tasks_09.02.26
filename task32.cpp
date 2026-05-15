#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

void reverse(int_vector* v) {
    for (int i = 0; i < v->size / 2; i++) {
        int temp = v->data[i];
        v->data[i] = v->data[v->size - 1 - i];
        v->data[v->size - 1 - i] = temp;
    }
}

int main() {
    int_vector v = {new int[4]{1, 2, 3, 4}, 4, 4};
    reverse(&v);
    for (int i = 0; i < v.size; i++) std::cout << v.data[i] << " ";
    std::cout << std::endl;
    delete[] v.data;
    return 0;
}
