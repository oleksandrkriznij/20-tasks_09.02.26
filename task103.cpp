#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
void merge_sort_iterative(vector<T>& v) {

    int n = v.size();

    for (int size = 1; size < n; size *= 2) {

        for (int left = 0; left < n - size; left += 2 * size) {

            int mid = left + size - 1;
            int right = min(left + 2 * size - 1, n - 1);

            vector<T> temp;

            int i = left;
            int j = mid + 1;

            while (i <= mid && j <= right) {

                if (v[i] <= v[j]) {
                    temp.push_back(v[i++]);
                }
                else {
                    temp.push_back(v[j++]);
                }
            }

            while (i <= mid) {
                temp.push_back(v[i++]);
            }

            while (j <= right) {
                temp.push_back(v[j++]);
            }

            for (int k = left; k <= right; k++) {
                v[k] = temp[k - left];
            }
        }
    }
}

int main() {
    vector<int> v = {5, 3, 8, 4, 2};

    merge_sort_iterative(v);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
