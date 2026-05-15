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
void quick_sort_helper(vector<T>& v, int low, int high, int& count) {

    if (low < high) {

        count++;

        int pi = partition_qs(v, low, high);

        quick_sort_helper(v, low, pi - 1, count);
        quick_sort_helper(v, pi + 1, high, count);
    }
}

template<typename T>
int quick_sort_count(vector<T>& v) {

    int count = 0;

    quick_sort_helper(v, 0, v.size() - 1, count);

    return count;
}

int main() {
    vector<int> v = {5, 3, 8, 4, 2};

    int result = quick_sort_count(v);

    cout << result;

    return 0;
}
