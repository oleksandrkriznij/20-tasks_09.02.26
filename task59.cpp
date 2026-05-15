#include <iostream>

template<typename T>
struct vector {
    T* data;
    int size;
    int capacity;
};

bool is_palindrome(vector<char>& v, int left, int right) {
    if (left >= right) return true;
    if (v.data[left] != v.data[right]) return false;
    return is_palindrome(v, left + 1, right - 1);
}

int main() {
    char arr[] = {'a', 'b', 'b', 'a'};
    vector<char> v = {arr, 4, 4};
    std::cout << "Is palindrome: " << std::boolalpha << is_palindrome(v, 0, 3) << std::endl;
    return 0;
}
