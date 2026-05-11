#include <iostream>

using namespace std;

struct int_vector {
    int* data;
    int size;
    int capacity;
};

void pop_back(int_vector* v) {
    if (v->size > 0) {
        v->size--;
    }
}

int main() {
    int_vector v;

    v.size = 5;
    v.capacity = 5;

    v.data = new int[v.capacity];

    v.data[0] = 10;
    v.data[1] = 20;
    v.data[2] = 30;
    v.data[3] = 40;
    v.data[4] = 50;

    cout << "Before pop_back:" << endl;

    for (int i = 0; i < v.size; i++) {
        cout << v.data[i] << " ";
    }

    cout << endl;

    pop_back(&v);

    cout << "After pop_back:" << endl;

    for (int i = 0; i < v.size; i++) {
        cout << v.data[i] << " ";
    }

    cout << endl;

    delete[] v.data;

    return 0;
}
