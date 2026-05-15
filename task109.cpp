#include <iostream>

using namespace std;

int hash_linear(int x, int a, int b, int p, int m) {
    return ((a * x + b) % p) % m;
}

int main() {
    int a = 3;
    int b = 7;
    int p = 101;
    int m = 10;

    for (int i = 0; i <= 9; i++) {
        cout << "x = " << i
             << " -> hash = "
             << hash_linear(i, a, b, p, m)
             << endl;
    }

    return 0;
}
