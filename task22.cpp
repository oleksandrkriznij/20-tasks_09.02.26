#include <iostream>

using namespace std;

struct int_vector {
    int* data;
    int size;
    int capacity;
};

void clear(int_vector* v) {
    v->size = 0;
}

int main() {
    int_vector v;

    v.size = 5;
    v.capacity = 5;

    v.data = new int[v.capacity];

    for (int i = 0; i < v.size; i++) {
        v.data[i] = (i + 1) * 10;
    }

    cout << "Before clear:" << endl;

    for (int i = 0; i < v.size; i++) {
        cout << v.data[i] << " ";
    }

    cout << endl;

    clear(&v);

    cout << "After clear:" << endl;
    cout << "Size = " << v.size << endl;

    delete[] v.data;

    return 0;
}
