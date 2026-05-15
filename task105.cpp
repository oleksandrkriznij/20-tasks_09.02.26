#include <iostream>
#include <vector>
#include <chrono>
#include <cstdlib>
#include <algorithm>

using namespace std;

vector<int> generate_random_vector(int n) {

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        v[i] = rand() % 100000;
    }

    return v;
}

int main() {

    vector<int> sizes = {100, 1000, 10000};

    for (int n : sizes) {

        vector<int> v = generate_random_vector(n);
        vector<int> copy = v;

        auto start = chrono::high_resolution_clock::now();

        sort(copy.begin(), copy.end());

        auto end = chrono::high_resolution_clock::now();

        auto duration = chrono::duration_cast<chrono::microseconds>(end - start);

        cout << "n = " << n << " -> " << duration.count() << " us" << endl;
    }

    return 0;
}
