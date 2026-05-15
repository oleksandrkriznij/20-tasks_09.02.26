#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

void sort(int_vector* v) {
    for (int i = 0; i < v->size - 1; i++) {
        for (int j = 0; j < v->size - i - 1; j++) {
            if (v->data[j] > v->data[j + 1]) {
                int temp = v->data[j];
                v->data[j] = v->data[j + 1];
                v->data[j + 1] = temp;
            }
        }
    }
}

int main() {
    int_vector v = {new int[5]{5, 1, 4, 2, 8}, 5, 5};
    sort(&v);
    for (int i = 0; i < v.size; i++) std::cout << v.data[i] << " ";
    std::cout << std::endl;
    delete[] v.data;
    return 0;
}
