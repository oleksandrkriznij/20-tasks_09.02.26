#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point {
    int x;
    int y;
};

bool compare_by_distance(const point& a, const point& b) {

    int distA = a.x * a.x + a.y * a.y;
    int distB = b.x * b.x + b.y * b.y;

    return distA < distB;
}

int main() {

    vector<point> points = {
        {3, 4},
        {1, 1},
        {0, 5},
        {2, 2}
    };

    sort(points.begin(), points.end(), compare_by_distance);

    for (auto p : points) {
        cout << "(" << p.x << ", " << p.y << ")" << endl;
    }

    return 0;
}
