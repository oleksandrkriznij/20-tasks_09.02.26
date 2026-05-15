#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void partition_3way(vector<T>& v, int low, int high, int& lt, int& gt) {

    T pivot = v[low];

    lt = low;
    gt = high;

    int i = low;

    while (i <= gt) {

        if (v[i] < pivot) {
            swap(v[i], v[lt]);
            i++;
            lt++;
        }
        else if (v[i] > pivot) {
            swap(v[i], v[gt]);
            gt--;
        }
        else {
            i++;
        }
    }
}

int main() {
    vector<int> v = {4, 2, 4, 1, 4, 3, 4};

    int lt, gt;

    partition_3way(v, 0, v.size() - 1, lt, gt);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
