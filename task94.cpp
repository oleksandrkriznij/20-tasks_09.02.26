#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void insertion_sort_desc(vector<T>& v) {

    for (int i = 1; i < v.size(); i++) {

        T key = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] < key) {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = key;
    }
}

int main() {
    vector<int> v = {5, 3, 8, 4, 2};

    insertion_sort_desc(v);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
