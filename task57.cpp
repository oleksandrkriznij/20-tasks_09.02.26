#include <iostream>

template<typename T>
struct vector {
    T* data;
    int size;
    int capacity;
};

template<typename T>
void recursive_reverse(vector<T>& v, int left, int right) {
    if (left >= right) return;
    T temp = v.data[left];
    v.data[left] = v.data[right];
    v.data[right] = temp;
    recursive_reverse(v, left + 1, right - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v = {arr, 5, 5};
    recursive_reverse(v, 0, 4);
    for(int i=0; i<5; i++) std::cout << v.data[i] << " "; // 5 4 3 2 1
    return 0;
}
