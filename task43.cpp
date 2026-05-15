#include <iostream>

struct point {
    int x;
    int y;
};

std::ostream& operator<<(std::ostream& out, const point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

int main() {
    point p{5, 10};
    std::cout << "Point coordinates: " << p << std::endl;
    return 0;
}
