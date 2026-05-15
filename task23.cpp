#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

bool is_empty(int_vector* v) {
    return v->size == 0;
}

int main() {
    int_vector v = {nullptr, 0, 0};
    std::cout << "Is empty: " << std::boolalpha << is_empty(&v) << std::endl;
    return 0;
}
