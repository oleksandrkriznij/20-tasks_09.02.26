#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

void reserve(int_vector* v, int n) {
    if (n > v->capacity) {
        int* newData = new int[n];
        for (int i = 0; i < v->size; i++) newData[i] = v->data[i];
        delete[] v->data;
        v->data = newData;
        v->capacity = n;
    }
}

int main() {
    int_vector v = {new int[2]{1, 2}, 2, 2};
    reserve(&v, 10);
    std::cout << "Capacity: " << v.capacity << std::endl;
    delete[] v.data;
    return 0;
}
