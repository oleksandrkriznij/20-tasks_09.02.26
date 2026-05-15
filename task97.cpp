#include <iostream>
#include <vector>

using namespace std;

template<typename T>
int partition_first(vector<T>& v, int low, int high) {

    T pivot = v[low];

    int i = low + 1;

    for (int j = low + 1; j <= high; j++) {

        if (v[j] < pivot) {
            swap(v[i], v[j]);
            i++;
        }
    }

    swap(v[low], v[i - 1]);

    return i - 1;
}

int main() {
    vector<int> v = {5, 3, 8, 4, 2};

    int pi = partition_first(v, 0, v.size() - 1);

    cout << "Pivot index: " << pi << endl;

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
