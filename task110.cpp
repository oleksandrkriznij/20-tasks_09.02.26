#include <iostream>

using namespace std;

struct point {
    int x;
    int y;
};

int hash_point(const point& p, int m) {
    int hash = (p.x * 31 + p.y * 17) % m;

    if (hash < 0) {
        hash += m;
    }

    return hash;
}

int main() {
    int m = 100;

    point p1 = {1, 2};
    point p2 = {2, 1};

    cout << "Point (1,2): "
         << hash_point(p1, m)
         << endl;

    cout << "Point (2,1): "
         << hash_point(p2, m)
         << endl;

    return 0;
}
