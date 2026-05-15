#include <iostream>
#include <vector>

using namespace std;

template<typename T>
bool is_sorted(vector<T>& v) {

    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] > v[i + 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<int> v = {1, 2, 3, 5};

    if (is_sorted(v)) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}
