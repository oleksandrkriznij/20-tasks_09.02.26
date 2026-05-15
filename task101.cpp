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
            result.push_back(a[i]);
            i++;
        }
        else {
            result.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size()) {
        result.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        result.push_back(b[j]);
        j++;
    }

    return result;
}

int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6};

    vector<int> result = merge_vectors(a, b);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
