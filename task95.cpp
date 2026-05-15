#include <iostream>
#include <vector>

using namespace std;

template<typename T>
int insertion_sort_count(vector<T>& v) {

    int shifts = 0;

    for (int i = 1; i < v.size(); i++) {

        T key = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j--;
            shifts++;
        }

        v[j + 1] = key;
    }

    return shifts;
}

int main() {
    vector<int> v = {5, 3, 8, 4, 2};

    int result = insertion_sort_count(v);

    cout << result;

    return 0;
}
