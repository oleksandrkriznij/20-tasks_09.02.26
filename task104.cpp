#include <iostream>
#include <vector>

using namespace std;

template<typename T>
vector<T> merge_vectors(vector<T>& a, vector<T>& b) {

    vector<T> result;

    int i = 0;
    int j = 0;

    while (i < a.size() && j < b.size()) {

        if (a[i] < b[j]) {
            result.push_back(a[i++]);
        }
        else {
            result.push_back(b[j++]);
        }
    }

    while (i < a.size()) {
        result.push_back(a[i++]);
    }

    while (j < b.size()) {
        result.push_back(b[j++]);
    }

    return result;
}

template<typename T>
void natural_merge_sort(vector<T>& v) {

    int n = v.size();

    int mid = 0;

    while (mid + 1 < n && v[mid] <= v[mid + 1]) {
        mid++;
    }

    if (mid == n - 1) {
        return;
    }

    vector<T> left(v.begin(), v.begin() + mid + 1);
    vector<T> right(v.begin() + mid + 1, v.end());

    v = merge_vectors(left, right);
}

int main() {
    vector<int> v = {1, 3, 5, 2, 4, 6};

    natural_merge_sort(v);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
