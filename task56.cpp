#include <iostream>

template<typename T>
struct vector {
    T* data;
    int size;
    int capacity;
};

template<typename T>
int recursive_count(vector<T>& v, T value, int index) {
    if (index == v.size) return 0;
    int count = (v.data[index] == value) ? 1 : 0;
    return count + recursive_count(v, value, index + 1);
}

int main() {
    int arr[] = {1, 3, 2, 3, 3};
    vector<int> v = {arr, 5, 5};
    std::cout << "Count of 3: " << recursive_count(v, 3, 0) << std::endl; // 3
    return 0;
}
