#include <iostream>

template<typename T>
struct vector {
    T* data;
    int size;
    int capacity;
};

template<typename T>
void recursive_selection_sort(vector<T>& v, int start) {
    if (start >= v.size - 1) return;

    int min_idx = start;
    for (int i = start + 1; i < v.size; i++) {
        if (v.data[i] < v.data[min_idx]) min_idx = i;
    }

    T temp = v.data[start];
    v.data[start] = v.data[min_idx];
    v.data[min_idx] = temp;

    recursive_selection_sort(v, start + 1);
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    vector<int> v = {arr, 5, 5};
    recursive_selection_sort(v, 0);
    for(int i=0; i<5; i++) std::cout << v.data[i] << " "; // 11 12 22 25 64
    return 0;
}
