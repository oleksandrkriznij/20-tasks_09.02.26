#include <iostream>
#include <vector>

using namespace std;

template<typename T>
int binary_search_position(vector<T>& v, T key, int left, int right) {

    while (left <= right) {

        int mid = (left + right) / 2;

        if (v[mid] > key) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return left;
}

template<typename T>
void binary_insertion_sort(vector<T>& v) {

    for (int i = 1; i < v.size(); i++) {

        T key = v[i];

        int pos = binary_search_position(v, key, 0, i - 1);

        for (int j = i - 1; j >= pos; j--) {
            v[j + 1] = v[j];
        }

        v[pos] = key;
    }
}

int main() {
    vector<int> v = {5, 3, 8, 4, 2};

    binary_insertion_sort(v);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
