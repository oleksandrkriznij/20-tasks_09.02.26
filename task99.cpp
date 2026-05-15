#include <iostream>
#include <vector>

using namespace std;

template<typename T>
int partition_qs(vector<T>& v, int low, int high) {

    T pivot = v[high];

    int i = low - 1;

    for (int j = low; j < high; j++) {

        if (v[j] < pivot) {
            i++;
            swap(v[i], v[j]);
        }
    }

    swap(v[i + 1], v[high]);

    return i + 1;
}

template<typename T>
T quick_select(vector<T>& v, int k) {

    int low = 0;
    int high = v.size() - 1;

    k--;

    while (true) {

        int pi = partition_qs(v, low, high);

        if (pi == k) {
            return v[pi];
        }
        else if (k < pi) {
            high = pi - 1;
        }
        else {
            low = pi + 1;
        }
    }
}

int main() {
    vector<int> v = {5, 3, 8, 4, 2};

    cout << quick_select(v, 2);

    return 0;
}
