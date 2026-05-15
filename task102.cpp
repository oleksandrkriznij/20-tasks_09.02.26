#include <iostream>
#include <vector>

using namespace std;

template<typename T>
int merge_count(vector<T>& v, int left, int mid, int right) {

    vector<T> temp;

    int i = left;
    int j = mid + 1;

    int inv = 0;

    while (i <= mid && j <= right) {

        if (v[i] <= v[j]) {
            temp.push_back(v[i]);
            i++;
        }
        else {
            temp.push_back(v[j]);
            inv += (mid - i + 1);
            j++;
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

    return inv;
}

template<typename T>
int merge_sort_inv(vector<T>& v, int left, int right) {

    if (left >= right) {
        return 0;
    }

    int mid = (left + right) / 2;

    int inv = 0;

    inv += merge_sort_inv(v, left, mid);
    inv += merge_sort_inv(v, mid + 1, right);

    inv += merge_count(v, left, mid, right);

    return inv;
}

template<typename T>
int count_inversions(vector<T>& v) {
    return merge_sort_inv(v, 0, v.size() - 1);
}

int main() {
    vector<int> v = {5, 3, 8, 4, 2};

    cout << count_inversions(v);

    return 0;
}
