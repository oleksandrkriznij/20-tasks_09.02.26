#include <iostream>

template<typename T>
struct vector {
    T* data;
    int size;
    int capacity;
};

template<typename T>
bool recursive_is_sorted(vector<T>& v, int index) {
    if (index >= v.size - 1) return true;
    if (v.data[index] > v.data[index + 1]) return false;
    return recursive_is_sorted(v, index + 1);
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    vector<int> v1 = {arr1, 4, 4};
    std::cout << "Sorted: " << std::boolalpha << recursive_is_sorted(v1, 0) << std::endl; // true

    int arr2[] = {1, 5, 3, 7};
    vector<int> v2 = {arr2, 4, 4};
    std::cout << "Sorted: " << recursive_is_sorted(v2, 0) << std::endl; // false
    return 0;
}
