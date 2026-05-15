#include <iostream>

template<typename T>
struct vector {
    T* data;
    int size;
    int capacity;
};

template<typename T>
T recursive_max(vector<T>& v, int index) {
    if (index == v.size - 1) return v.data[index];
    T max_rest = recursive_max(v, index + 1);
    return (v.data[index] > max_rest) ? v.data[index] : max_rest;
}

int main() {
    int arr[] = {3, 7, 2, 9, 4};
    vector<int> v = {arr, 5, 5};
    std::cout << "Max element: " << recursive_max(v, 0) << std::endl; // 9
    return 0;
}
