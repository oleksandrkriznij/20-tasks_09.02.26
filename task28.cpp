#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

void shrink_to_fit(int_vector* v) {
    if (v->size < v->capacity) {
        int* newData = new int[v->size];
        for (int i = 0; i < v->size; i++) newData[i] = v->data[i];
        delete[] v->data;
        v->data = newData;
        v->capacity = v->size;
    }
}

int main() {
    int_vector v = {new int[10]{1, 2}, 2, 10};
    shrink_to_fit(&v);
    std::cout << "New capacity: " << v.capacity << std::endl;
    delete[] v.data;
    return 0;
}
