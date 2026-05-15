#include <iostream>

struct int_vector {
    int* data;
    int size;
    int capacity;
};

void push_back(int_vector* v, int val) {
    if (v->size == v->capacity) {
        int new_cap = v->capacity == 0 ? 1 : v->capacity * 2;
        int* newData = new int[new_cap];
        for (int i = 0; i < v->size; i++) newData[i] = v->data[i];
        if (v->data) delete[] v->data;
        v->data = newData;
        v->capacity = new_cap;
    }
    v->data[v->size++] = val;
}

int main() {
    int_vector v = {nullptr, 0, 0};
    int x;

    std::cout << "Вводьте числа (0 для виходу):" << std::endl;

    while (std::cin >> x && x != 0) {
        push_back(&v, x);
    }

    std::cout << "Результат у зворотному порядку: ";
    for (int i = v.size - 1; i >= 0; i--) {
        std::cout << v.data[i] << " ";
    }
    std::cout << std::endl;

    if (v.data) delete[] v.data;
    return 0;
}
