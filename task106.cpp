#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> v;

    for (int i = 1; i <= 20; i++) {
        v.push_back(i);
    }

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
