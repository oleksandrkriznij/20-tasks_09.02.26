#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

int& front(int_vector* v) {
    return v->data[0];
}

int main() {
    int_vector v = {new int[3]{100, 200, 300}, 3, 3};
    std::cout << "Front: " << front(&v) << std::endl;
    delete[] v.data;
    return 0;
}
