#include <iostream>
#include <vector>

using namespace std;

template<typename T>
void insert_sorted(vector<T>& v, T value) {

    v.push_back(value);

    int i = v.size() - 2;

    while (i >= 0 && v[i] > value) {
        v[i + 1] = v[i];
        i--;
    }

    v[i + 1] = value;
}

int main() {
    vector<int> v = {2, 4, 6, 8};

    insert_sorted(v, 5);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
